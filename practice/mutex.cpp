#include <cstdlib>
#include <mutex>
#include <iostream>
#include <thread>

//
// Created by zhanggen on 16-8-5.
//

std::mutex g_lock;

void testMutex()
{
    g_lock.lock();
    std::cout << std::this_thread::get_id() << std::endl;
    g_lock.unlock();
}

int main(int argc, char * argv[])
{

    std::thread t1(testMutex);
    std::thread t2(testMutex);
    std::thread t3(testMutex);
    std::thread t4(testMutex);

    t1.join();
    t2.join();
    t3.join();
    t4.join();

    return EXIT_SUCCESS;
}
