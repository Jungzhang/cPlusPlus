/*************************************************************************
	> File Name: 11_31.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年03月01日 星期二 17时04分00秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <map>

int main(int argc, char *argv[])
{
    std::multimap<std::string, std::string> authors;
    std::string author, work;
    
    std::cout << "输入作者及作品：" << std::endl;
    while (std::cin >> author >> work) {
        authors.insert({author, work});
    }

    for (auto a : authors) {
        std::cout << a.first << " " << a.second << std::endl;
    }
    
    std::cin.clear();
    std::cout << "输入要查找的作者：" << std::endl;
    std::cin >> author;
    auto tar = authors.find(author);

    while (tar != authors.end()) {
        authors.erase(tar);
        tar = authors.find(author);
    }

    for (auto a : authors) {
        std::cout << a.first << " " << a.second << std::endl;
    }
    
    return EXIT_SUCCESS;
}
