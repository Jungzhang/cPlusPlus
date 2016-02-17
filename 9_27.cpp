/*************************************************************************
	> File Name: 9_27.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月18日 星期四 05时56分26秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <forward_list>

int main(int argc, char *argv[])
{
    int ia[] = {0, 1, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::forward_list<int> fl(ia, std::end(ia));
    auto prev = fl.before_begin();
    auto tar = fl.begin();
    while (tar != fl.end()) {
        if (*tar % 2) {
            tar = fl.erase_after(prev);
        } else {
            prev = tar;
            ++tar;
        }
    }

    for (auto a : ia) {
        std::cout << a << " ";
    }
    std::cout << std::endl;

    for (auto a : fl) {
        std::cout << a << " ";
    }
    std::cout << std::endl;
    
    return EXIT_SUCCESS;
}
