/*************************************************************************
	> File Name: 4_10.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2015年12月06日 星期日 16时54分32秒
	> Description: 习题4.10
 ************************************************************************/
#include <iostream>

int main(int argc, char *argv[])
{
    int num;

    std::cin >> num;

    while(num != 42){
        std::cin >> num;
    }
    
    return 0;
}
