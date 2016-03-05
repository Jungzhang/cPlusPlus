/*************************************************************************
	> File Name: 12_16.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年03月05日 星期六 16时16分41秒
	> Description: 
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <memory>

int main(int argc, char *argv[])
{
    std::unique_ptr<int> p(new int(42));
    std::unique_ptr<int> q;
    q = p;  //此代码是错误的,仅仅用来研究clang++和g++下对于此类错误的报错信息
    
    return EXIT_SUCCESS;
}
