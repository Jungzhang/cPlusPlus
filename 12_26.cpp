/*************************************************************************
	> File Name: 12_26.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年03月06日 星期日 15时46分44秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <memory>

int main(int argc, char *argv[])
{
    std::allocator<std::string> alloc;
    auto const p = alloc.allocate(1024);
    auto q = p, r = p;

    std::string word;
    while (std::cin >> word) {
        alloc.construct(q++, word);
    }

    while (r != q) {
        std::cout << *r++ << std::endl;
    }

    while (q != p) {
        alloc.destroy(--q);
    }

    alloc.deallocate(p, 1024);

    return EXIT_SUCCESS;
}
