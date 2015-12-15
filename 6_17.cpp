/*************************************************************************
	> File Name: 6_17.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2015年12月15日 星期二 20时24分25秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cctype>

bool IsUpper(const std::string &s)
{
    for (auto a : s) {
        if (isupper(a)) {
            return true;
        }
    }

    return false;
}

void change(std::string &s)
{
    for (auto &a : s) {
        if (isupper(a)) {
            a = tolower(a);
        }
    }
}

int main(int argc, char *argv[])
{
    std::string s;

    getline(std::cin, s);
    
    if (IsUpper(s)) {
        std::cout << "含有大写字母" << std::endl;
    } else {
        std::cout << "不含大写字母" << std::endl;
    }

    std::cout << s << std::endl;
    change(s);
    std::cout << s << std::endl;
    
    return 0;
}
