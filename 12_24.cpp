/*************************************************************************
	> File Name: 12_24.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年03月06日 星期日 15时01分26秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>

int main(int argc, char *argv[])
{
    char *input = new char[1024] ();
    std::cin.getline(input, 1024);

    std::cout << input << std::endl;
    delete [] input;
    
    return EXIT_SUCCESS;
}
