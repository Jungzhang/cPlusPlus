/*************************************************************************
	> File Name: 9_14.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月14日 星期日 14时47分37秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <list>

void func(std::list<std::string> &a, std::list<const char*> &b)
{
    a.assign(b.begin(), b.end());
}

int main(int argc, char *argv[])
{
    std::list<std::string> a = {"aaa", "bbb", "ccc"};
    std::list<const char*> b = {"qwer", "asdf"};

    func(a, b);

    for (auto c : a) {
        std::cout << c << " ";
    }
    std::cout << std::endl;

    for (auto c : b) {
        std::cout << c << " ";
    }
    std::cout << std::endl;
    
    return EXIT_SUCCESS;
}
