/*************************************************************************
	> File Name: 9_20.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月18日 星期四 02时48分05秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <list>
#include <deque>

int main(int argc, char *argv[])
{
    std::list<int> l;
    std::deque<int> d1;
    std::deque<int> d2;

    int tmp;

    while (std::cin >> tmp) {
        l.push_back(tmp);
    }

    for (auto a = l.begin(); a != l.end(); ++a) {
        if ((*a) % 2 != 0) {
            d1.push_back(*a);
        } else {
            d2.push_back(*a);
        }
    }

    for (const auto &a : d1) {
        std::cout << a << " ";
    }
    std::cout << std::endl;
    for (const auto &a : d2) {
        std::cout << a << " ";
    }
    std::cout << std::endl;
    
    return EXIT_SUCCESS;
}
