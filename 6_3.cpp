/*************************************************************************
	> File Name: 6_3.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2015年12月15日 星期二 17时23分46秒
	> Description:
 ************************************************************************/
#include <iostream>

int fact(int num)
{
    int result = 1;

    for (int i = 1; i <= num; ++i) {
        result *= i;
    }

    return result;
}

int main(int argc, char *argv[])
{
    int result, num;
    
    std::cout << "输入数字：";
    std::cin >> num;

    result = fact(num);

    std::cout << "阶乘结果是：" << result << std::endl;
    
    return 0;
}
