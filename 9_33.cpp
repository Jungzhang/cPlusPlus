/*************************************************************************
	> File Name: 9_33.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月19日 星期五 13时33分39秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <vector>

int main(int argc, char *argv[])
{
    std::vector<int> v = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto iter = v.begin();

    while(iter != v.end()) {
        ++iter;
        iter = v.insert(iter, 42);
        ++iter;
    }
    
    return EXIT_SUCCESS;
}
