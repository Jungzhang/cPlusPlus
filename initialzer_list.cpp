/*************************************************************************
	> File Name: test.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2015年11月29日 星期日 14时36分05秒
	> Description:
 ************************************************************************/
#include <iostream>

void error_msg(std::initializer_list<std::string> il)
{
    for (const std::basic_string<char> *beg = il.begin(); beg != il.end(); ++beg) {
        std::cout << *beg << "\t";
    }

    std::cout << std::endl;
}

int main(int argc, char *argv[])
{
    int a[3], i = 23;
    std::string s1, s2;
    s1 = "aaa";
    s2 = "aaa";

    if (s1 == s2) {
        std::cout << "相等" << std::endl;
    } else {
        std::cout << "不相等" << std::endl;
    }

    for (auto &b : a) {
        b = i;
        ++i;
    }
    
    error_msg({"aaa", "bbb", "ccc"});

    return 0;
}
