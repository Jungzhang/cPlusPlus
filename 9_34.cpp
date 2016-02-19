/*************************************************************************
	> File Name: 9_34.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月19日 星期五 13时42分43秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <vector>

int main(int argc, char *argv[])
{
    std::vector<int> vi = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto iter = vi.begin();

    while (iter != vi.end()) {
        if (*iter % 2) {
            iter = vi.insert(iter, *iter);
            ++iter;
        }
        ++iter;
    }

    for (auto a : vi) {
        std::cout << a << " ";
    }
    std::cout << std::endl;
    
    return EXIT_SUCCESS;
}
