/*************************************************************************
	> File Name: 11_12.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月29日 星期一 19时19分22秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <utility>
#include <vector>

int main(int argc, char *argv[])
{
    std::string str;
    std::vector<std::pair<std::string, int>> p;
    int num;

    while (std::cin >> str >> num) {
        p.push_back(std::pair<std::string, int> (str, num));
    }

    for (auto a : p) {
        std::cout << a.first << "  " << a.second << std::endl;
    }

    
    return EXIT_SUCCESS;
}
