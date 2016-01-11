/*************************************************************************
	> File Name: 6_36.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2015年12月20日 星期日 19时00分33秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>

std::string (&func())[10]
{
    static std::string s[10];
    
    for (auto &a : s) {
        a = "aaa";
    }

    return s;
}

int main(int argc, char *argv[])
{
    auto &s = func();

    for (auto a : s) {
        std::cout << a << std::endl;
    }
    
    return EXIT_SUCCESS;
}
