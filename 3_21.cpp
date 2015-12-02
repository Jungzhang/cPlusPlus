/*************************************************************************
	> File Name: 3_21.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2015年12月02日 星期三 21时11分39秒
	> Description: 习题3.21
 ************************************************************************/
#include <iostream>
#include <vector>

int main(int argc, char *argv[])
{
    std::vector<int> v;

    for (int i = 0; i < 10; i++){
        v.push_back(i);
    }
    
    std::cout << v.size() << std::endl;

    for (auto a = v.cbegin(); a != v.cend(); a++){
        std::cout << *a << "  ";
    }

    std::cout << std::endl;
    
    return 0;
}
