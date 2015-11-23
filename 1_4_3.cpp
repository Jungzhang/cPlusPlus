/*************************************************************************
	> File Name: 1_4_3.cpp
	> Author: jungzhang
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2015年11月23日 星期一 21时13分32秒
	> Description: C++ primer 书上例题
 ************************************************************************/
#include <iostream>

int main(void)
{
    int sum = 0, value = 0;
    
    while(std::cin >> value){
        sum += value;
    }
    
    std::cout << "Sum is : " << sum << std::endl;

    return 0;
}
