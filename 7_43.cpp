/*************************************************************************
	> File Name: 7_43.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月05日 星期五 17时08分12秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <vector>

class NoDefault {
public:
    NoDefault(int a) {}
};

class C {
    NoDefault a;
public:
    C() : a(0) {}
};

int main(int argc, char *argv[])
{
    C a;
    std::vector<C> b(10);
    
    return EXIT_SUCCESS;
}
