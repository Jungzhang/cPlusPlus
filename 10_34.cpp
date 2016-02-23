/*************************************************************************
	> File Name: 10_34.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月23日 星期二 12时14分51秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <vector>

int main(int argc, char *argv[])
{
    std::vector<int> vec = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (auto it = vec.crbegin(); it != vec.crend(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    
    return EXIT_SUCCESS;
}
