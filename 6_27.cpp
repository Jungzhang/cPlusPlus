/*************************************************************************
	> File Name: 6_27.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2015年12月16日 星期三 16时21分27秒
	> Description:
 ************************************************************************/
#include <iostream>

int sum(std::initializer_list<int> num)
{
    int result = 0;

    for (auto a : num) {
        result += a;
    }

    return result;
}

int main(int argc, char *argv[])
{
    auto num = {1,2,3,4,5,6,7,8,9,10};
    auto num2 = {1,3,5,7,9,11};

    std::cout << "num : " << sum(num) << std::endl;
    std::cout << "num2 : " << sum(num2) << std::endl;
    
    return 0;
}
