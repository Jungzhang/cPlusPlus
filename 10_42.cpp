/*************************************************************************
	> File Name: 10_42.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月21日 星期日 17时40分21秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <list>

int main(int argc, char *argv[])
{
    std::list<std::string> l;
    std::string str;
    
    while(std::cin >> str) {
        l.push_back(str);
    }
    
    l.sort();
    l.unique();


    for (auto a : l) {
        std::cout << a << " ";
    }
    std::cout << std::endl;
    
    return EXIT_SUCCESS;
}
