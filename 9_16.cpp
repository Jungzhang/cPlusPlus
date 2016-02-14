/*************************************************************************
	> File Name: 9_16.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月14日 星期日 15时14分08秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <vector>
#include <list>

int main(int argc, char *argv[])
{
    std::vector<int> a = {2,2,2,2};
    std::vector<int> b = {2,2,2,2};
    std::list<int> c = {2,2,2,2};
    std::vector<int> d(c.begin(), c.end());

    if (a == d) {
        std::cout << "相等" << std::endl; 
    }
    
    return EXIT_SUCCESS;
}
