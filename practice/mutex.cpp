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

int main(int argc, char * argv[])
{

    std::thread t1(testMutex1);
    std::thread t2(testMutex1);
    std::thread t3(testMutex1);
    std::thread t4(testMutex1);

    t1.join();
    t2.join();
    t3.join();
    t4.join();

    return EXIT_SUCCESS;
}
