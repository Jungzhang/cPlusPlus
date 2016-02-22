/*************************************************************************
	> File Name: 10_27.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月22日 星期一 17时50分43秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <vector>
#include <list>
#include <algorithm>

int main(int argc, char *argv[])
{
    std::vector<int> v = {0, 1, 1, 2, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::list<int> l;

    auto it = back_inserter(l);
    sort(v.begin(), v.end());

    unique_copy(v.begin(), v.end(), it);

    for (auto a : l) {
        std::cout << a << " ";
    }
    std::cout << std::endl;
    
    return EXIT_SUCCESS;
}
