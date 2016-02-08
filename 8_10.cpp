/*************************************************************************
	> File Name: 8_10.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月06日 星期六 17时17分41秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <vector>
#include <fstream>
#include <sstream>

int main(int argc, char *argv[])
{
    if (argc < 2) {
        return EXIT_FAILURE;
    }
    std::ifstream file(argv[1]);
    std::vector<std::string> s;
    std::string tmp;
    if (file) {
        while(getline(file, tmp)) {
            s.push_back(tmp);
        }
    }
    
    for (auto &a : s) {
        std::istringstream st(a);
        std::string str;
        while(st >> str) {
            std::cout << str <<std::endl;
        }
    }
    
    return EXIT_SUCCESS;
}
