/*************************************************************************
	> File Name: 10_1.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月21日 星期日 15时47分35秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>

int main(int argc, char *argv[])
{
    std::vector<int> v = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 0, 1, 2, 3, 4, 1, 2, 1};

    std::cout << count(v.begin(), v.end(), 1) << std::endl;
    
    return EXIT_SUCCESS;
}
