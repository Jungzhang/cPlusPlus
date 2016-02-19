/*************************************************************************
	> File Name: 9_47_1.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月19日 星期五 17时42分31秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <string>

int main(int argc, char *argv[])
{
    std::string str = "ab2c3d7R4E6";
    std::string numbers("0123456789");
    std::string alp("qwertyuioplkjhgfdsazxcvbnmQWERTYUIOPLKJHGFDSAZXCVBNM");
    std::string::size_type pos = 0;

    while((pos = str.find_first_of(numbers, pos)) != std::string::npos) {
        std::cout << pos++ << " ";
    }
    std::cout << std::endl;
    
    pos = 0;
    while((pos = str.find_first_of(alp, pos)) != std::string::npos) {
        std::cout << pos++ << " ";
    }
    std::cout << std::endl;

    return EXIT_SUCCESS;
}
