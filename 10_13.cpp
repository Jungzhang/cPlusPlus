/*************************************************************************
	> File Name: 10_13.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月22日 星期一 10时58分32秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

bool IsFive(const std::string s)
{
    return s.size() >= 5;
}

int main(int argc, char *argv[])
{
    std::vector<std::string> v;
    std::string s;

    while (std::cin >> s) {
        v.push_back(s);
    }
    
    auto FiveEnd = partition(v.begin(), v.end(), IsFive);

    for (auto a = v.cbegin(); a != FiveEnd; ++a) {
        std::cout << *a << " ";
    }
    std::cout << std::endl;
    
    return EXIT_SUCCESS;
}
