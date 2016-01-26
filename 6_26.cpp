/*************************************************************************
	> File Name: 6_26.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年01月26日 星期二 12时56分03秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>

int main(int argc, char *argv[])
{
    for (size_t a = 1; a < argc; ++a) {
        std::cout << argv[a] << std::endl;
    }
    
    return EXIT_SUCCESS;
}
