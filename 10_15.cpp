/*************************************************************************
	> File Name: 10_15.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月22日 星期一 12时29分19秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>

int main(int argc, char *argv[])
{
    int a = 10;
    auto b = [a](int c) {return a + c;};
    
    std::cout << b(10) << std::endl;

    return EXIT_SUCCESS;
}
