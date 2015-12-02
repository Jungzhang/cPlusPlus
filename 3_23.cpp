/*************************************************************************
	> File Name: 3_23.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2015年12月02日 星期三 21时50分28秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <vector>

int main(int argc, char *argv[])
{
    std::vector<int> num;
    int tmp;

    for (decltype(num.size()) i = 0; i < 10; i++){
        std::cin >> tmp;
        num.push_back(tmp);
    }

    for (auto t = num.begin(); t != (num.end()); t++){
        *t = (*t) * 2;
    }

    for (auto t : num){
        std::cout << t << "  ";
    }

    std::cout << std::endl;
    
    return 0;
}
