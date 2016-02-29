/*************************************************************************
	> File Name: 11_23.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月24日 星期三 06时17分22秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <map>
#include <vector>

int main(int argc, char *argv[])
{
    std::multimap<std::string, std::string> names;

    std::string name, first_name;

    while (std::cin >> first_name) {
        std::cin >> name;
        names.insert({first_name, name});
    }

    for (auto a : names) {
        std::cout << a.first << " "  << a.second << std::endl;
    }
    
    return EXIT_SUCCESS;
}
