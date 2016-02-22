/*************************************************************************
	> File Name: 10_21.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月22日 星期一 16时07分09秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <algorithm>

int main(int argc, char *argv[])
{
    int num = 10;

    auto f = [&num]() {return --num ? true : false;};
    while (f()) {
        std::cout << num << " ";
    }
    std::cout << num << std::endl;
    
    return EXIT_SUCCESS;
}
