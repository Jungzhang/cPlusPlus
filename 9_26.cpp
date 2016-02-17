/*************************************************************************
	> File Name: 9_26.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月18日 星期四 05时13分59秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <list>
#include <vector>

int main(int argc, char *argv[])
{
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    std::vector<int> v(ia, std::end(ia));
    std::list<int> l(ia, std::end(ia));

    auto it = v.begin();
    while(it != v.end()) {
        if (*it % 2) {
            ++it;
        } else {
            it = v.erase(it);
        }
    }

    auto it1 = l.begin();
    while(it1 != l.end()) {
        if (*it1 % 2) {
            it1 = l.erase(it1);
        } else {
            ++it1;
        }
    }

    std::cout << "原始：";
    for (auto a : ia) {
        std::cout << a << " ";
    }
    std::cout << std::endl << "vector：";

    for (auto a : v) {
        std::cout << a << " ";
    }
    std::cout << std::endl << "list：";

    for (auto a : l) {
        std::cout << a << " ";
    }
    std::cout << std::endl;
    
    return EXIT_SUCCESS;
}
