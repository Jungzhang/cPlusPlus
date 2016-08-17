//
// Created by zhanggen on 16-8-13.
// 时间轮定时器
//

#ifndef TSHH_TIMEWHEEL_H
#define TSHH_TIMEWHEEL_H

#include <ctime>
#include <netinet/in.h>
#include <iostream>

#define BUFFER_SIZE 64

class tw_timer;

//将客户端信息和定时器一一对应起来
struct client_data {
    sockaddr_in address;
    int sockfd;
    char buf[BUFFER_SIZE];
    tw_timer *timer;
};

//定时器类
class tw_timer {
public:
    tw_timer(int rot, int ts, decltype(cb_func) func, decltype(user_data) data)
            : rotation(rot), time_slot(ts), next(nullptr), prev(nullptr), cb_func(func), user_data(data){}

public:
    int rotation;       //记录定时器在时间轮旋转多少圈后生效
    int time_slot;      //记录定时器属于时间轮上哪个槽
    void (*cb_func) (client_data *);        //定时器回调函数
    client_data *user_data;     //客户数据
    tw_timer *next;     //下一个
    tw_timer *prev;     //上一个
};

class time_wheel {
public:
    time_wheel()
    {
        for (auto &a : slots) {
            a = nullptr;    //初始化每个槽的头节点
        }
    }

    ~time_wheel()
    {
        for (int i = 0; i < N; ++i) {
            tw_timer *tmp = slots[i];
            while (tmp) {
                slots[i] = tmp->next;
                delete tmp;
                tmp = slots[i];
            }
        }
    }

    //根据定时值timeout创建一个定时器，并把它插入合适的槽中
    tw_timer *add_timer(int timeout, void (*cb_func) (client_data *), client_data *data)
    {
        if (timeout < 0) {
            return nullptr;
        }

        int ticks = 0;

        //计算多少个时间间隔后被触发，并存入ticks变量中,如果不够一个时间间隔则按一个时间间隔算
        //如果超过一个时间间隔而又不满两个时间间隔则按一个算
        if (timeout < ST) {
            ticks = 1;
        } else {
            ticks = timeout / ST;   //向下取整
        }

        //计算待插入定时器在时间轮多少圈后触发
        int rotation = ticks / N;
        //计算定时器该插入哪个槽中
        int ts = (cur_slot + (ticks % N)) % N;              //该公式确保了定时器超时时刚好在当前转到的时间槽上
        //创建定时器，它在时间轮转动rotation圈后被触发，并且位于第ts个槽上
        tw_timer *timer = new tw_timer(rotation, ts, cb_func, data);

        //如果ts槽中尚未有任何节点则将其插入槽中作为首节点
        if (!slots[ts]) {
            std::cout << "新插入定时器，并作为头节点" << std::endl;
            slots[ts] = timer;
        } else {  //如果有节点则头插法插入ts槽中
            std::cout << "插入成功" << std::endl;
            timer->next = slots[ts];
            slots[ts]->prev = timer;
            slots[ts] = timer;
        }

        return timer;
    }

    //删除目标定时器timer
    void del_timer(tw_timer *timer)
    {
        if (!timer) {
            return;
        }

        //取出定时器所在的槽
        int ts = timer->time_slot;

        //slots[ts]是目标定时器所在槽的头节点.如果目标定时器就是该头节点，则需要重置第ts个槽的头节点
        if (slots[ts] == timer) {

            slots[ts]->next = timer->next;

            if (slots[ts] != nullptr) {
                slots[ts]->prev = nullptr;
            }

            delete timer;
            std::cout << "删除成功" << std::endl;
        } else {
            timer->prev->next = timer->next;

            if (timer->next) {
                timer->next->prev = timer->prev;
            }

            delete timer;
        }
    }

    //SI时间间隔到后调用该函数，时间轮向前滚动一个时间槽
    void tick()
    {
        tw_timer *tmp = slots[cur_slot];    //取得时间轮上的头节点
        std::cout << "转换前的时间槽是:" << cur_slot << std::endl;

        //因为在定时器添加的时候就计算出了定时器超时时在哪个槽上，所以此处只需要遍历当前槽上的所有定时器
        //遍历当前轮上的所有节点，看是否有定时事件已经超时
        while (tmp) {

            //表明在本轮触发
            if (tmp->rotation == 0) {
                tmp->cb_func(tmp->user_data); //调用回调函数
                //删除定时器
                tw_timer *tmp1 = tmp->next;
                del_timer(tmp);
                tmp = tmp1;
            } else { //如果不再本轮触发则将所经历的轮数减一
                --tmp->rotation;
                tmp = tmp->next;
            }
        }
        cur_slot = ++cur_slot % N;      //修改当前轮
    }

private:
    static const int N = 60;        //槽数量
    static const int ST = 1;        //每一秒时间转动一次
    tw_timer *slots[N];             //槽
    int cur_slot = 0;                   //当前槽
};

#endif //TSHH_TIMEWHEEL_H
