/*************************************************************************
	> File Name: 10_3.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月21日 星期日 16时07分17秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <numeric>
#include <vector>

int main(int argc, char *argv[])
{
    std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::cout << accumulate(v.begin(), v.end(), 0) << std::endl;
    
    return EXIT_SUCCESS;
}
