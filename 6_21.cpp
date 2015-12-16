/*************************************************************************
	> File Name: 6_21.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2015年12月16日 星期三 11时13分31秒
	> Description:
 ************************************************************************/
#include <iostream>

int func(int num1, const int *num2)
{
    return num1 < *num2 ? *num2 : num1;
}

int main(int argc, char *argv[])
{
    int num1, num2;
    std::cin >> num1 >> num2;

    std::cout << "较大值是：" << func(num1, &num2) << std::endl;

    return 0;
}
