/*************************************************************************
	> File Name: 11_4.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月23日 星期二 16时34分29秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <map>
#include <set>
#include <algorithm>

int main(int argc, char *argv[])
{
    std::map<std::string, size_t> words_count;
    std::string word;

    while(std::cin >> word) {
        for (auto &a : word) {
            a = tolower(a);
        }
        word.erase(remove_if(word.begin(), word.end(), ispunct), word.end());
        ++words_count[word];
    }

    for (auto a : words_count) {
        std::cout << a.first << "：" << a.second << std::endl;
    }
    
    return EXIT_SUCCESS;
}
