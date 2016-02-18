/*************************************************************************
	> File Name: 9_28.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月18日 星期四 08时59分35秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <forward_list>

void InsertString(std::forward_list<std::string> &s, const std::string &s1, const std::string &s2)
{
    std::forward_list<std::string>::iterator a, prev = s.before_begin();

    for (a = s.begin(); a != s.end(); ++a, ++prev) {
        if (*a == s1) {
            s.insert_after(a, s2);
            return;
        }
    }
    s.insert_after(prev, s2);
}

int main(int argc, char *argv[])
{
    std::forward_list<std::string> s = {"abcd", "1234", "qwer", "asdf"};
    for (auto a : s) {
        std::cout << a << " ";
    }
    std::cout << std::endl;
    InsertString(s, "asdf", "99999");
    for (auto a : s) {
        std::cout << a << " ";
    }
    std::cout << std::endl;
    
    return EXIT_SUCCESS;
}
