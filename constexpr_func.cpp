/*************************************************************************
	> File Name: constexpr_func.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年01月31日 星期日 15时55分17秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>

constexpr int func(int arg)
{
    return 1 + arg;
}

int main(int argc, char *argv[])
{
    constexpr int a = func(1); // 正确
//    int b = 1;
//    constexpr int c = func(b); // 错误,因为返回值不是constexpr
    
    return EXIT_SUCCESS;
}
