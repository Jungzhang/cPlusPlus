/*************************************************************************
	> File Name: 9_49.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月19日 星期五 18时03分14秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>

int main(int argc, char *argv[])
{
    if (argc < 2) {
        return EXIT_FAILURE;
    }
    std::ifstream input(argv[1]);

    if (!input) {
        return EXIT_FAILURE;
    }
    
    std::string word, longest;
    while (input >> word) {
        if (word.find_first_not_of("acemnorsuvwxz") == std::string::npos && word.size() > longest.size()) {
            longest = word;
        }
    }

    std::cout << longest << std::endl;
    
    return EXIT_SUCCESS;
}
