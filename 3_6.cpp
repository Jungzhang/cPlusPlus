/*************************************************************************
	> File Name: 3_6.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2015年12月02日 星期三 15时57分42秒
	> Description:  习题3.6
 ************************************************************************/
#include <iostream>

int main(int argc, char *argv[])
{
    std::string str;

    std::cin >> str;

    std::cout << "原字符串：" << str << std::endl;

    for (decltype(str.size()) i = 0; i < str.size(); i++){
        str[i] = 'X';
    }

    std::cout << "新字符串：" << str << std::endl;
    
    return 0;
}
