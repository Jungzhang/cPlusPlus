/*************************************************************************
	> File Name: 9_31_2.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月19日 星期五 13时13分33秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <forward_list>

int main(int argc, char *argv[])
{
    std::forward_list<int> flst = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto iter = flst.begin();
    auto prev = flst.before_begin();

    while (iter != flst.end()) {
        if (*iter % 2) {
            iter = flst.insert_after(iter, *iter);
            prev = iter;
            ++iter;
        } else {
            iter = flst.erase_after(prev);
        }
    }

    for (auto a : flst) {
        std::cout << a << " ";
    }
    std::cout << std::endl;
    
    return EXIT_SUCCESS;
}
