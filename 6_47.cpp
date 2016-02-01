/*************************************************************************
	> File Name: 6_47.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2015年12月16日 星期三 18时34分57秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <vector>

void print(std::vector<int> &v, decltype(v.begin()) it)
{
    if (it == v.end()) {
        return;
    }
#ifdef DEBUG 
    std::cout << "vectorsize：" << v.size() << std::endl;
#endif
    std::cout << *it << "\t";

    print(v, ++it);
}

int main(int argc, char *argv[])
{
    std::vector<int> v;

    for (int i = 0; i < 10; ++i) {
        v.push_back(i);
    }

    print(v, v.begin());
    std::cout << std::endl;
    
    return EXIT_SUCCESS;
}
