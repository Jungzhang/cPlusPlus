/*************************************************************************
	> File Name: 3_41.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2015年11月29日 星期日 14时36分05秒
	> Description: 练习3.41
 ************************************************************************/
#include <iostream>
#include <vector>

int main(int argc, char *argv[])
{
    int num[10];
    int i = 0;

    for (auto &a : num){
        a = i;
        i++;
    }

    std::vector<int> v(std::begin(num), std::end(num));

    for (auto a : v){
        std::cout << a << "  ";
    }

    std::cout << std::endl;

    return 0;
}
