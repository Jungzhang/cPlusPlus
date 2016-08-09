//
// Created by zhanggen on 16-8-5.
//

#include <iostream>
#include <mutex>
#include <thread>

std::once_flag flag;

void do_once()
{
    std::call_once(flag, [](){ std::cout << "Called once" << std::endl;});
}

//int main(int argc, char *argv[])
//{
//    std::thread t1(do_once);
//    std::thread t2(do_once);
//    std::thread t3(do_once);
//
//    t1.join();
//    t2.join();
//    t3.join();
//
//    return 0;
//}