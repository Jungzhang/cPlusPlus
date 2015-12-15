/*************************************************************************
	> File Name: 6_5.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2015年12月15日 星期二 17时42分44秒
	> Description:
 ************************************************************************/
#include <iostream>

int abs(int num)
{
    return num > 0 ? num : -num;
}

int main(int argc, char *argv[])
{
    int num;
    std::cin >> num;

    std::cout << abs(num) << std::endl;
    
    return 0;
}
