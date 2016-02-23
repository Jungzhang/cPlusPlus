/*************************************************************************
	> File Name: 11_8.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月24日 星期三 07时03分33秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <vector>
#include <set>

int main(int argc, char *argv[])
{
    std::set<std::string> s;
    std::vector<std::string> words;
    std::string word;
    
    while (std::cin >> word) {
        if (s.find(word) == s.end()){
            s.insert(word);
            words.push_back(word);
        }
    }

    for (auto a : words) {
        std::cout << a << " ";
    }
    std::cout << std::endl;
    
    return EXIT_SUCCESS;
}
