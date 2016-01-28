/*************************************************************************
	> File Name: 6_38.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年01月28日 星期四 16时16分17秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>

int odd[] = {1, 3, 5, 7, 9};
int even[] = {0, 2, 4, 6, 8};

decltype(odd) &arrPtr(int i)
{
    return (i % 2) ? odd : even;
}

int main(int argc, char *argv[])
{
    decltype(odd) &a = arrPtr(2);

    for (auto b : a) {
        std::cout << b << std::endl;
    }
    
    return EXIT_SUCCESS;
}
