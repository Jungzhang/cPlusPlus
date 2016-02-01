/*************************************************************************
	> File Name: 6_51.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月01日 星期一 16时14分06秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>

void f(void)
{
    std::cout << "无参函数" << std::endl;
}

void f(int a)
{
    std::cout << "一个int函数" << std::endl;
}

void f(int a, int b)
{
    std::cout << "两个int函数" << std::endl;
}

void f(double a, double b = 3.14)
{
    std::cout << "两个double函数" << std::endl;
}

int main(int argc, char *argv[])
{
//    f(2.56, 42);
    f(42);
    f(42, 0);
    f(2.56, 3.14);
    
    return EXIT_SUCCESS;
}
