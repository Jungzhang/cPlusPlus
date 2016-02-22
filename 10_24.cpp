/*************************************************************************
	> File Name: 10_24.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月22日 星期一 16时49分02秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <functional>
#include <algorithm>
#include <vector>

bool check_size(const std::string &s, const int num)
{
    return s.size() < num;
}

int main(int argc, char *argv[])
{
    std::string s;
    std::cin >> s;

    std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

    auto a = find_if(v.cbegin(), v.cend(), bind(check_size, s, std::placeholders::_1));

    std::cout << *a << std::endl;
    
    return EXIT_SUCCESS;
}
