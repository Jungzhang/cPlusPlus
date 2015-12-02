/*************************************************************************
	> File Name: 3_16.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2015年12月02日 星期三 17时25分52秒
	> Description: 习题3.16
 ************************************************************************/
#include <iostream>
#include <vector>

int main(int argc, char *argv[])
{
    std::vector<int> v;

    for (int i = 0; i < 10; i++){
        v.push_back(i);
    }

    std::cout << "共有" << v.size() << "个元素" << std::endl;

    for (auto i : v){
        std::cout << i << "  ";
    }
    std::cout << std::endl;
    
    return 0;
}
