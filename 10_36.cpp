/*************************************************************************
	> File Name: 10_36.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月23日 星期二 12时29分25秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <list>
#include <algorithm>

int main(int argc, char *argv[])
{
    std::list<int> l = {0, 1, 2, 3, 4, 5, 0, 9, 10};

    auto tar = find(l.crbegin(), l.crend(), 0);

    std::cout << *tar << "下一个值：" << *(++tar) << std::endl;

    return EXIT_SUCCESS;
}
