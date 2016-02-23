/*************************************************************************
	> File Name: 10_37.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月23日 星期二 13时03分40秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <vector>
#include <list>

int main(int argc, char *argv[])
{
    std::vector<int> vec = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    std::list<int> lst;

    auto li = back_inserter(lst);
    
    copy(vec.crbegin() + 2, vec.crbegin() + 7, li);

    for (auto a : lst) {
        std::cout << a << " ";
    }
    std::cout << std::endl;
    
    return EXIT_SUCCESS;
}
