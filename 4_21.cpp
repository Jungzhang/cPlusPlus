/*************************************************************************
	> File Name: 4_21.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2015年12月06日 星期日 19时02分03秒
	> Description: 习题4.21
 ************************************************************************/
#include <iostream>
#include <vector>

int main(int argc, char *argv[])
{
    std::vector<int> v;

    for (int i = 0; i < 15; ++i){
        v.push_back(i+1);
    }
    
    for (auto a : v){
        std::cout << a << "\t";
    }
    std::cout << std::endl;

    for (auto a = v.begin(); a != v.end(); ++a){
        (*a % 2 != 0) ? (*a = *a * 2) : *a;
    }

    for (auto a : v){
        std::cout << a << "\t";
    }
    std::cout << std::endl;
    
    return 0;
}
