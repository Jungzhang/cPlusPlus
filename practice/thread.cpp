//
// Created by zhanggen on 16-8-5.
//

#include <thread>
#include <iostream>

void func1()
{

}

//线程的基本用法
int main(int argc, char *argv[])
{
    std::thread t(func1);
    std::cout << t.get_id() << std::endl;

    std::cout << std::thread::hardware_concurrency() << std::endl;

    t.join();

    return 0;
}
