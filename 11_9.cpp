/*************************************************************************
	> File Name: 11_9.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月25日 星期四 10时41分40秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <map>
#include <list>

int main(int argc, char *argv[])
{
    std::map<std::string, std::list<int>> words;

    std::string word;
    int num;
    
    while(std::cin >> word) {
        std::cin >> num;
        words[word].push_back(num);
    }

    for (auto a : words) {
        std::cout << a.first << "：";
        for (auto b : words[a.first]) {
            std::cout << b << " ";
        }
        std::cout << std::endl;
    }

    return EXIT_SUCCESS;
}
