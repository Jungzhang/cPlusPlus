/*************************************************************************
	> File Name: test.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年01月26日 星期二 13时28分24秒
	> Description: 返回一个左值
 ************************************************************************/
#include <iostream>
#include <cstdlib>

std::string &func(std::string &b)
{
    return b;
}

int main(int argc, char *argv[])
{
    std::string str = "add";

    std::cout << str << std::endl;
    func(str) = "ccc";

    std::cout << str << std::endl;
    
    return EXIT_SUCCESS;
}
