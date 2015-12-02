/*************************************************************************
	> File Name: 3_17.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2015年12月02日 星期三 17时30分09秒
	> Description: 习题3.17
 ************************************************************************/
#include <iostream>
#include <vector>

int main(int argc, char *argv[])
{
    std::vector<std::string> str;
    std::string temp;

    while (std::cin >> temp){
        str.push_back(temp);
    }

    for (auto &i : str){
        for (auto &j : i){
            j = toupper(j);
        }
    }

    for (auto i : str){
        std::cout << i << std::endl;
    }
    
    return 0;
}
