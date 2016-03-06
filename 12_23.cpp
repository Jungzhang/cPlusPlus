/*************************************************************************
	> File Name: 12_23.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年03月06日 星期日 14时50分53秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <cstring>

int main(int argc, char *argv[])
{
    std::string s1 = "Hello", s2 = "World";
    std::string s3 = s1 + s2;

    std::cout << "String : " << s3 << std::endl;

    char *result = new char[255]();
    strcat(result, "Hello");
    strcat(result, "World");

    std::cout << "Array : " << result << std::endl;
    delete [] result;
    
    return EXIT_SUCCESS;
}
