/*************************************************************************
	> File Name: 9_4.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月14日 星期日 13时39分39秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <vector>

bool FindValue(std::vector<int> &a, int value)
{
    std::vector<int>::iterator it = a.begin();
    while (it != a.end()) {
        if (*it == value) {
            return true;
        }
        ++it;
    }

    return false;
}

int main(int argc, char *argv[])
{
    std::vector<int> a = {1,2,3,4,5,6,7,8,9,10};
    std::vector<int> b = {0,9,234,432,56,12,532};

    if (FindValue(a, 7)) {
        std::cout << "找到" << std::endl;
    } else {
        std::cout << "未找到" << std::endl;
    }

    if (FindValue(b, 12345)) {
        std::cout << "找到" << std::endl;
    } else {
        std::cout << "未找到" << std::endl;
    }
    
    return EXIT_SUCCESS;
}
