/*************************************************************************
	> File Name: 11_32.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年03月01日 星期二 17时04分00秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <map>
#include <set>

int main(int argc, char *argv[])
{
    std::multimap<std::string, std::string> authors;
    std::string author, work;
    
    std::cout << "输入作者及作品：" << std::endl;
    while (std::cin >> author >> work) {
        authors.insert({author, work});
    }

    std::map<std::string, std::multiset<std::string>> order;
    
    for (const auto &a : authors) {
        order[a.first].insert(a.second);
    }

    for (auto a : order) {
        std::cout << a.first << "：";
        for (auto b : a.second) {
            std::cout << b << " ";
        }
        std::cout <<std::endl;
    }
    
    return EXIT_SUCCESS;
}
