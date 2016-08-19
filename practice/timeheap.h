//
// Created by zhanggen on 16-8-17.
// 时间堆
//

#ifndef PRACTICE_TIMEHEAP_H
#define PRACTICE_TIMEHEAP_H

#include <netinet/in.h>
#include <exception>

#define BUFFER_SIZE 64

class heap_timer;

//将客户端信息和定时器一一对应起来
struct client_data {
    sockaddr_in address;
    int sockfd;
    char buf[BUFFER_SIZE];
    heap_timer *timer;
};

//定时器类
class heap_timer {
public:
    heap_timer(int delay, decltype(cb_func) func, client_data *data) : cb_func(func), user_data(data)
    {
        expire = time(nullptr) + delay;
    }

public:
    time_t expire;      //定时器生效的绝对时间
    void (*cb_func)(client_data *);     //定时器的回调函数
    client_data *user_data;             //客户端数据
};

//时间堆类
class time_heap {
public:

    //初始化一个大小为capacity的空堆(构造函数)
    time_heap(int cap) throw(std::exception) : capacity(cap), cur_size(0)
    {
        array = new heap_timer* [capacity];
        if (!array) {
            throw std::exception();
        } else {
            for (int i = 0; i < capacity; ++i) {
                array[i] = nullptr;
            }
        }
    }

    //使用已有数组初始化一个堆(构造函数)
    time_heap(heap_timer **init_array, int size, int cap) throw(std::exception)
            : cur_size(0), capacity(cap)
    {
        if (capacity < size) {
            throw std::exception();
        }

        array = new heap_timer* [capacity];

        if (!array) {
            throw std::exception();
        }

        for (int i = 0; i < capacity; ++i) {
            array[i] = nullptr;
        }

        if (size != 0) {
            for (int i = 0; i < size; ++i) {
                array[i] = init_array[i];
            }
            for (int j = (cur_size - 1) / 2; j >= 0; --j) {
                percolate_down(j);
            }
        }
    }

    //清理空间(析构函数)
    ~time_heap()
    {
        for (int i = 0; i < cur_size; ++i) {
            delete array[i];    //释放指针数组元素指向的动态空间
        }
        delete [] array;        //释放数组空间
    }

    //添加定时器
    void add_timer(heap_timer *timer) throw(std::exception)
    {
        if (!timer) {
            return;
        }

        if (cur_size >= capacity) {
            resize();
        }

        int hole = cur_size;
        ++cur_size;
        int parent = 0;

        //上滤操作
        while (hole > 0)
        {
            parent = (hole - 1) / 2;
            if (array[parent]->expire <= timer->expire) {
                break;
            }
            array[hole] = array[parent];
            hole = parent;
        }
        array[hole] = timer;
    }

    //删除目标定时器timer
    void del_timer(heap_timer *timer)
    {
        if (!timer) {
            return;
        }

        //延迟销毁,即：将回调函数置为空，这将节省一部分开销，但同时也会造成数组的膨胀
        timer->cb_func = nullptr;
    }

    //获得堆顶的定时器
    heap_timer *top() const
    {
        if (empty()) {
            return nullptr;
        } else {
            return array[0];
        }
    }

    //删除堆顶元素
    void pop_timer()
    {
        if (empty()) {
            return;
        } else {
            if (array[0]) {
                delete array[0];
                array[0] = array[--cur_size];
                percolate_down(0);
            }
        }
    }

    //判断是否为空
    bool empty() const
    {
        return cur_size == 0;
    }

    //心博函数
    void tick()
    {
        heap_timer *tmp = array[0];
        time_t cur = time(nullptr);

        while (!empty()) {

            if (!tmp) {
                break;
            }

            //如果堆顶定时器没有到期则循环退出
            if (tmp->expire > cur) {
                break;
            }

            //否则执行中断任务
            if (array[0]->cb_func) {
                array[0]->cb_func(array[0]->user_data);
            }

            pop_timer();
            tmp = array[0];
        }
    }

private:
    //最小堆的下滤操作,本函数找到hole所指的位置处的值应该放的位置
    //如果想要调整整个堆必须循环调用本函数以确保所有的值都归位
    void percolate_down(int hole)
    {
        heap_timer *temp = array[hole];  //取出父节点的内容
        int child = 0;

        while ((hole * 2 + 1) <= (cur_size - 1)) {  //如果父节点的孩子节点存在，即不是叶子节点
            child = hole * 2 + 1;   //左孩子节点

            //选择左孩子和右孩子中值较小的一个
            if ((child < cur_size - 1) && (array[child + 1]->expire < array[child]->expire)) {
                ++child;
            }

            //如果值较小的节点值小于父节点，则将较小值交换到父节点处
            if (array[child]->expire < temp->expire) {
                array[hole] = array[child];
            } else {
                break;
            }
            hole = child;
        }
        array[hole] = temp;
    }

    //将数组容量扩大一倍
    void resize() throw(std::exception)
    {
        heap_timer **temp = new heap_timer* [2 * capacity];

        if (!temp) {
            throw std::exception();
        }

        for (int i = 0; i < capacity * 2; ++i) {
            temp[i] = nullptr;
        }

        capacity *= 2;

        for (int j = 0; j < cur_size; ++j) {
            temp[j] = array[j];
        }

        delete[] array;
        array = temp;
    }

private:
    heap_timer **array;      //堆数组
    int capacity;           //堆数组容量
    int cur_size;           //堆当前包含的元素个数
};

#endif //PRACTICE_TIMEHEAP_H
