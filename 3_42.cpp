/*************************************************************************
	> File Name: 3_42.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2015年11月29日 星期日 14时36分05秒
	> Description: 练习3.42
 ************************************************************************/
#include <iostream>
#include <vector>

int main(int argc, char *argv[])
{
    int num[10];
    std::vector<int> v;

    for (int i = 0; i < 10; i++){
        v.push_back(i);
    }


    auto it = v.begin();

    for (decltype(v.size()) i = 0; i < v.size(); i++){
        num[i] = *(it + i);
    }

    for (auto i : num){
        std::cout << i << "  ";
    }

    std::cout << std::endl;

    return 0;
}
