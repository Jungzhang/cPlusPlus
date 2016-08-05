#include <iostream>
#include <thread>
#include <zconf.h>
#include <fstream>

void func()
{
    std::ofstream f("/home/zhanggen/cPlusPlus/practice/1.txt");

    if (!f) {
        std::cout << "打开失败" << std::endl;
        return;
    }

    for (int i = 0; i < 5; ++i) {
        std::cout << "打开成功" <<std::endl;
        f << "aaa" << std::endl;
        sleep(1);
    }

    f.close();
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
//    std::thread mythread1(std::bind(func1, 1,2.9));
//    std::thread mythread2([](int a, double b){for(int  i = 0;  i < 3; ++ i) {std::cout << a*b << std::endl;sleep(1);}}, 2, 3.5);

//    mythread2.join();
    mythread.join();
    for (int i = 0; i < 6; ++i) {
        std::cout << "你好" << std::endl;
        sleep(1);
    }
//    mythread1.join();

    return 0;
}