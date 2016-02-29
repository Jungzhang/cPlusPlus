/*************************************************************************
	> File Name: 11_14.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月24日 星期三 06时17分22秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <map>
#include <vector>
#include <utility>

int main(int argc, char *argv[])
{
    std::map<std::string, std::pair<std::string, std::string>> names;

    std::string name, first_name, birthday;

    while (std::cin >> first_name) {
        std::cin >> name;
        std::cin >> birthday;
        names[first_name] = (make_pair(name, birthday));
    }

    for (auto a : names) {
        std::cout << a.first << "：" << names[a.first].first << " " << names[a.first].second << std::endl;
    }
    
    return EXIT_SUCCESS;
}
