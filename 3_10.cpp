/*************************************************************************
	> File Name: 3_10.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2015年12月02日 星期三 16时07分55秒
	> Description: 习题3.10
 ************************************************************************/
#include <iostream>

int main(int argc, char *argv[])
{
    std::string str;

    std::cin >> str;

    for (decltype(str.size()) i = 0; i < str.size(); i++){
        if (!ispunct(str[i])){
            std::cout << str[i];
        }
    }
    std::cout << std::endl;
    
    return 0;
}
