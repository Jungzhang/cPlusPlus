/*************************************************************************
	> File Name: 6_22.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2015年12月16日 星期三 11时20分46秒
	> Description:
 ************************************************************************/
#include <iostream>

void func(int *&a, int *&b)
{
    int *temp;

    temp = a;
    a = b;
    b = temp;
}
int main(int argc, char *argv[])
{
    int a = 0, b = 3;
    int *c = &a;
    int *d = &b;

    std::cout << "c = " << c << std::endl;
    std::cout << "d = " << d << std::endl;

    func(c, d);
    
    std::cout << "c = " << c << std::endl;
    std::cout << "d = " << d << std::endl;

    
    return 0;
}
