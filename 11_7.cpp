/*************************************************************************
	> File Name: 11_7.cpp
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
    std::map<std::string, std::vector<std::string>> names;

    std::string name, first_name;

    while (std::cin >> first_name) {
        std::cin >> name;
        names[first_name].push_back(name);
    }

    for (auto a : names) {
        std::cout << a.first << "：";
        for (auto b : names[a.first]) {
            std::cout << b << " ";
        }
        std::cout << std::endl;
    }
    
    return EXIT_SUCCESS;
}
