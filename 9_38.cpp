/*************************************************************************
	> File Name: 9_38.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月19日 星期五 14时59分38秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <vector>

int main(int argc, char *argv[])
{
    std::vector<int> v;
    std::cout << "size：" << v.size() << "\t" << "capacity：" << v.capacity() << std::endl;

    for (int i = 0; i < 10; ++i) {
        v.push_back(i);
    }
    
    std::cout << "size：" << v.size() << "\t" << "capacity：" << v.capacity() << std::endl;
    for (int i = 0; i < 6; ++i) {
        v.push_back(i);
    }
    std::cout << "size：" << v.size() << "\t" << "capacity：" << v.capacity() << std::endl;

    v.push_back(16);
    std::cout << "size：" << v.size() << "\t" << "capacity：" << v.capacity() << std::endl;
    
    return EXIT_SUCCESS;
}
