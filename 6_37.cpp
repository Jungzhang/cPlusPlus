/*************************************************************************
	> File Name: 6_37.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年01月28日 星期四 13时28分28秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>

//使用类型别名
using arrRef = std::string (&)[10];

arrRef func1()
{
    static std::string str[10];
    char ch = 'A';

    for (auto &a:str) {
        a = ch;
        ++ch;
    }

    return str;
}

//使用尾置返回类型
auto func2() -> std::string (&)[10]
{
    char ch = 'a';
    static std::string str[10];

    for (auto &a : str) {
        a = ch;
        ++ch;
    }

    return str;
}

//使用decltype关键字
std::string str2[10];
decltype(str2) &func3()
{
    char ch = 'L';
    static std::string str3[10];

    for (auto &a : str3) {
        a = ch;
        ++ch;
    }

    return str3;
}

int main(int argc, char *argv[])
{
    arrRef s = func1();

    std::cout << "使用类型别名" << std::endl;
    for (auto a:s) {
        std::cout << a << std::endl;
    }

    std::string (&s1)[10] = func2();
    
    std::cout << "使用尾置返回类型" << std::endl;
    for (auto a : s1) {
        std::cout << a << std::endl;
    }

    std::cout << "使用decltype" << std::endl;
    std::string (&s3)[10] = func3();
    for (auto a : s3) {
        std::cout << a << std::endl;
    }
    
    return EXIT_SUCCESS;
}
