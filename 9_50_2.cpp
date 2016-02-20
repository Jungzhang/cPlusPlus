/*************************************************************************
	> File Name: 9_50_2.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月20日 星期六 12时09分45秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <vector>

int main(int argc, char *argv[])
{
    std::vector<std::string> v;
    std::string s;
    double num, sum = 0;
    
    while(std::cin >> s) {
        v.push_back(s);
    }

    for (auto a = v.cbegin(); a != v.cend(); ++a) {
        num = std::stod(*a, 0);
        sum += num;
    }

    std::cout << "和为：" << sum << std::endl;
    
    return EXIT_SUCCESS;
}
