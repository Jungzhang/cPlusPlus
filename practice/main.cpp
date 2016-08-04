#include <iostream>
#include <thread>
#include <zconf.h>

void func()
{
    for(int i = 0; i < 3; ++i) {
        std::cout << "Hello World" << std::endl;
        sleep(1);
    }
}

void func1(int a, double b)
{
    for (int i = 0; i < 3; ++i) {
        std::cout << a+b << std::endl;
        sleep(1);
    }
}

int main(int argc, char *argv[])
{

    std::thread mythread(func);
    std::thread mythread1(std::bind(func1, 1,2.9));
    std::thread mythread2([](int a, double b){for(int  i = 0;  i < 3; ++ i) {std::cout << a*b << std::endl;sleep(1);}}, 2, 3.5);

    mythread2.join();
    mythread.join();
    mythread1.join();

    return 0;
}