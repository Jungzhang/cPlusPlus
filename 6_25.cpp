/*************************************************************************
	> File Name: 6_25.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2015年12月16日 星期三 12时36分24秒
	> Description:
 ************************************************************************/
#include <iostream>

int main(int argc, char *argv[])
{
    std::string s;

    if (argc >= 3){
        s = s + argv[1] + argv[2];
    }

    std::cout << s << std::endl;
    
    return 0;
}
