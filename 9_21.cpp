/*************************************************************************
	> File Name: 9_21.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月18日 星期四 03时27分32秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <vector>

int main(int argc, char *argv[])
{
    std::vector<int> v;
    int tmp;
    auto iter = v.begin();
    
    while(std::cin >> tmp) {
        iter = v.insert(iter, tmp);
    }

    for (auto a : v) {
        std::cout << a << " ";
    }
    std::cout << std::endl;
    
    return EXIT_SUCCESS;
}
