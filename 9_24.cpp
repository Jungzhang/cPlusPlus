/*************************************************************************
	> File Name: 9_24.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月18日 星期四 04时02分52秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <vector>

int main(int argc, char *argv[])
{
    std::vector<int> v;
    int tmp;
    
    while(std::cin >> tmp) {
        v.push_back(tmp);
    }

    std::cout << "下标：" << v[0] << std::endl;
    std::cout << "at：" << v.at(0) <<std::endl;
    std::cout << "front：" << v.front() << std::endl;
    std::cout << "begin：" << *v.begin() << std::endl;
    
    return EXIT_SUCCESS;
}
