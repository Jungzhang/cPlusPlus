/*************************************************************************
	> File Name: 10_28.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月22日 星期一 18时09分58秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <list>

int main(int argc, char *argv[])
{
    std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::list<int> v1, v2, v3;

    copy(v.begin(), v.end(), inserter(v1, v1.begin()));
    copy(v.begin(), v.end(), back_inserter(v2));
    copy(v.begin(), v.end(), front_inserter(v3));

    std::cout << "inserter：";
    for (auto a : v1) {
        std::cout << a << " ";
    }
    std::cout << std::endl;

    std::cout << "back_inserter：";
    for (auto a : v2) {
        std::cout << a << " ";
    }
    std::cout << std::endl;

    std::cout << "front_inserter：";
    for (auto a : v3) {
        std::cout << a << " ";
    }
    std::cout << std::endl;
    
    return EXIT_SUCCESS;
}
