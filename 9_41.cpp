/*************************************************************************
	> File Name: 9_41.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月19日 星期五 15时26分14秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>

int main(int argc, char *argv[])
{
    std::vector<char> s;
    char ch, s1[100];
    int i = 0;

    while(std::cin >> ch) {
        s.push_back(ch);
    }

    for (const auto &a : s) {
        s1[i] = a; ++i;
    }
    s1[i] = '\0';

    std::string str(s1, i);

    std::cout << str << std::endl;
    
    return EXIT_SUCCESS;
}
