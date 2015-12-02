/*************************************************************************
	> File Name: 3_4.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2015年11月30日 星期一 21时52分58秒
	> Description: 练习3.4
 ************************************************************************/
#include <iostream>

int main(int argc, char *argv[])
{
    std::string s1,s2;
    std::cin >> s1 >> s2;

    if (s1 > s2) {
        std::cout << "较大的为：" << s1 << std::endl;
    } else if (s1 < s2) {
        std::cout << "较大的为：" << s2 << std::endl;
    } else {
        std::cout << "相等" << std::endl;
    }
    
    return 0;
}
