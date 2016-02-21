/*************************************************************************
	> File Name: 10_2.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月21日 星期日 15时47分35秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <list>

int main(int argc, char *argv[])
{
    std::list<std::string> l = {"Hello", "World", "Hello", "Linux", "Xiyou", "Hi", "Hello"};

    std::cout << count(l.begin(), l.end(), "Hello") << std::endl;
    
    return EXIT_SUCCESS;
}
