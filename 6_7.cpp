/*************************************************************************
	> File Name: 6_7.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2015年12月15日 星期二 18时01分10秒
	> Description:
 ************************************************************************/
#include <iostream>

int func()
{
    static int num = 0;

    return ++num;
}

int main(int argc, char *argv[])
{
    for (int i = 0; i < 10; ++i) {
        std::cout << func() << std::endl;
    }
    
    return 0;
}
