/*************************************************************************
	> File Name: 9_19.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月16日 星期二 08时11分35秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <deque>

int main(int argc, char *argv[])
{
    std::deque<std::string> str;
    std::string tmp;
    
    while (std::cin >> tmp) {
        str.push_back(tmp);
    }

    for (std::deque<std::string>::const_iterator a = str.begin(); a != str.end(); ++a) {
        std::cout << *a << std::endl;
    }
    
    return EXIT_SUCCESS;
}
