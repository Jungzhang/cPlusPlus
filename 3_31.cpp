/*************************************************************************
	> File Name: 3_31.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2015年12月03日 星期四 20时38分36秒
	> Description:
 ************************************************************************/
#include <iostream>

int main(int argc, char *argv[])
{
    int a[10], i = 0;

    for (auto &b : a){
        b = i;
        i++;
    }

    for (auto b : a)
        std::cout << b << "  ";

    std::cout << std::endl;
    
    return 0;
}
