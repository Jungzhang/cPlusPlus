/*************************************************************************
	> File Name: 9_52.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月21日 星期日 12时20分24秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <stack>

int main(int argc, char *argv[])
{
    std::stack<char> s;
    std::string str;
    std::string tmp;
    
    getline(std::cin, str);
    for (const auto &a : str) {
        tmp = "";
        if (a != ')') {
            s.push(a);
        } else {
            while (s.top() != '(') {
                tmp += s.top();
                s.pop();
            }
            s.pop();
            for (const auto &b : tmp) {
                s.push(b);
            }
        }
    }

    while (!s.empty()) {
        std::cout << s.top();
        s.pop();
    }
    std::cout << std::endl;
    
    return EXIT_SUCCESS;
}
