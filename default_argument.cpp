/*************************************************************************
	> File Name: default_argument.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年01月28日 星期四 19时11分04秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>

int func(int a = 10, int b = 90)
{
    return a + b;
}

int main(int argc, char *argv[])
{
    std::cout << func(0,20) << std::endl;
    std::cout << func(20) << std::endl;
    std::cout << func() << std::endl;
    
    return EXIT_SUCCESS;
}
