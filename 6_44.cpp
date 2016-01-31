/*************************************************************************
	> File Name: 6_44.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年01月31日 星期日 16时04分33秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>

inline bool isShorter(const std::string &s1, const std::string &s2)
{
    return s1.size() < s2.size();
}

int main(int argc, char *argv[])
{
    std::string s1 = "aaaaaaa";
    std::string s2 = "asas";

    std::cout << isShorter(s1, s2) << std::endl;
    
    return EXIT_SUCCESS;
}
