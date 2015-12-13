/*************************************************************************
	> File Name: 5_24.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2015年12月13日 星期一 19时46分14秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <stdexcept>

int main(int argc, char *argv[])
{
    int num1, num2;

    std::cin >> num1 >> num2;
    
    if (num2 == 0) {
        throw std::runtime_error("除数不能为0");
    }

    std::cout << num1 / num2 << std::endl;
    
    return 0;
}
