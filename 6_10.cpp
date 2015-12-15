/*************************************************************************
	> File Name: 6_10.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2015年12月15日 星期二 19时23分55秒
	> Description:
 ************************************************************************/
#include <iostream>

void exchange(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}

int main(int argc, char *argv[])
{
    int a, b;

    std::cin >> a >> b;

    std::cout << "a = " << a << "\tb = " << b << std::endl;

    exchange(a, b);

    std::cout << "a = " << a << "\tb = " << b << std::endl;

    return 0;
}
