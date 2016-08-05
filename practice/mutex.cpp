#include <cstdlib>
#include <mutex>
#include <iostream>
#include <thread>
#include <zconf.h>

//
// Created by zhanggen on 16-8-5.
//互斥量练习
//

std::mutex g_lock; //独占性互斥量
//std::recursive_mutex mutex; //递归锁,允许一个线程多次获得同一把锁
std::timed_mutex timed_mutex;  //带超时的独占性锁

//普通使用
void testMutex()
{
    g_lock.lock();
    std::cout << std::this_thread::get_id() << std::endl;
    g_lock.unlock();
}

//使用自动释放的互斥量
void testMutex1()
{
    std::lock_guard<std::mutex> locker(g_lock);
    std::cout << std::this_thread::get_id() << std::endl;
    sleep(1);
}

//递归锁
struct Complex {
//    std::recursive_mutex mutex;    //递归锁
    std::mutex mutex; //普通锁，当使用这个的时候会导致程序死锁

    int i;

    Complex(int i) : i(i){}

    void mul(int x)
    {
//        std::lock_guard<std::recursive_mutex> lock(mutex);
        std::lock_guard<std::mutex> lock(mutex);
        i *= x;
        std::cout << i << std::endl;
    }

    void div(int x)
    {
//        std::lock_guard<std::recursive_mutex> lock(mutex);
        std::lock_guard<std::mutex> lock(mutex);
        i /= x;
        std::cout << i << std::endl;
    }

    void both(int x, int y)
    {
//        std::lock_guard<std::recursive_mutex> lock(mutex);
        std::lock_guard<std::mutex> lock(mutex);
        std::cout << "哈哈啊哈" << std::endl;
        mul(x);
        div(y);
    }
};

//带超时的独占性锁
void work()
{
    std::chrono::milliseconds timeout(100);

    while (true) {
        if (timed_mutex.try_lock_for(timeout)) {
            std::cout << "我抢到了锁，我的ID是:" << std::this_thread::get_id() << std::endl;
            std::chrono::milliseconds sleepTime(250);
            std::this_thread::sleep_for(sleepTime);
            timed_mutex.unlock();
        } else {
            std::cout << "超时:" << std::this_thread::get_id() << std::endl;
            std::chrono::milliseconds waitSleep(300);
            std::this_thread::sleep_for(waitSleep);
        }
        std::chrono::milliseconds waitSleep(100);
        std::this_thread::sleep_for(waitSleep);
    }
}

int main(int argc, char * argv[])
{

//    std::thread t1(testMutex1);
//    std::thread t2(testMutex1);
//    std::thread t3(testMutex1);
//    std::thread t4(testMutex1);
//
//    t1.join();
//    t2.join();
//    t3.join();
//    t4.join();

    std::thread thread(work);
    std::thread thread1(work);
    thread.join();
    thread1.join();

//    Complex complex(5);
//    complex.both(10,20);

    return EXIT_SUCCESS;
}
