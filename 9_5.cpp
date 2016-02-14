/*************************************************************************
	> File Name: 9_5.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月14日 星期日 13时39分39秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <vector>

std::vector<int>::iterator FindValue(std::vector<int> &a, int value)
{
    std::vector<int>::iterator it = a.begin();
    while (it != a.end()) {
        if (*it == value) {
            return it;
        }
        ++it;
    }

    return a.end();
}

int main(int argc, char *argv[])
{
    std::vector<int> a = {1,2,3,4,5,6,7,8,9,10};
    std::vector<int> b = {0,9,234,432,56,12,532};
    
    std::vector<int>::iterator it;

    if ((it = FindValue(a, 8)) != a.end()) {
        std::cout << "找到" << *it << std::endl;
    } else {
        std::cout << "未找到" << std::endl;
    }

    if ((it = FindValue(b, 532)) != b.end()) {
        std::cout << "找到" << *it << std::endl;
    } else {
        std::cout << "未找到" << std::endl;
    }
    
    return EXIT_SUCCESS;
}
