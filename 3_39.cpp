/*************************************************************************
	> File Name: 3_39.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2015年12月03日 星期四 21时20分36秒
	> Description: 练习3.39
 ************************************************************************/
#include <iostream>
#include <cstdio>
#include <cstring>

int main(int argc, char *argv[])
{
    std::string str1, str2;

    getline(std::cin, str1);
    getline(std::cin, str2);

    if (str1 < str2){
        std::cout << "1小于2" << std::endl;
    } else if (str1 > str2) {
        std::cout << "1大于2" << std::endl;
    } else {
        std::cout << "相等" << std::endl;
    }

    char s1[100], s2[100];
    scanf("%s", s1);
    scanf("%s", s2);

    if (strcmp(s1, s2) > 0){
        std::cout << "1小于2" << std::endl;
    } else if (strcmp(s1, s2) < 0) {
        std::cout << "1大于2" << std::endl;
    } else {
        std::cout << "相等" << std::endl;
    }
    
    return 0;
}
