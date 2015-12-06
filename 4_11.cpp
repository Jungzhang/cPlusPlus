/*************************************************************************
	> File Name: 4_11.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2015年12月06日 星期日 16时55分55秒
	> Description:
 ************************************************************************/
#include <iostream>

int main(int argc, char *argv[])
{
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;

    if (a > b && b > c && c > d){
        std::cout << "ok" << std::endl;
    } else {
        std::cout << "no" << std::endl;
    }
    
    return 0;
}
