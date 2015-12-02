/*************************************************************************
	> File Name: 6.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2015年12月02日 星期三 15时40分58秒
    > Description: 输入字符串统计标点符号个数
 ************************************************************************/
#include <iostream>

int main(int argc, char *argv[])
{
    std::string str;
    std::cout << "请输入一行字符串：";
    std::cin >> str;
    
    decltype(str.size()) count = 0;

    for(auto c : str){
        if (ispunct(c)){
            count++;
        }
    }

    std::cout << "其中标点符号个数为：" << count << std::endl;
    
    return 0;
}
