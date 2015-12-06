/*************************************************************************
	> File Name: 4_6.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2015年12月06日 星期日 16时24分21秒
	> Description: 习题4.6
 ************************************************************************/
#include <iostream>

int main(int argc, char *argv[])
{
    std::cout << "请输入整数：";
    
    int num;
    std::cin >> num;
    
    if (num % 2)
        std::cout << "奇数" << std::endl;
    else
        std::cout << "偶数" << std::endl;
    
    return 0;
}
