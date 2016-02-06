/*************************************************************************
	> File Name: 8_1.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月06日 星期六 14时43分31秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>

std::istream &func(std::istream &in)
{
    std::string s;
    while(in >> s) {
        std::cout << s << std::endl;
    }
    in.clear();

    return in;
}

int main(int argc, char *argv[])
{
    func(std::cin);
    
    return EXIT_SUCCESS;
}
