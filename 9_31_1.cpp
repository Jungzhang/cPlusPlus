/*************************************************************************
	> File Name: 9_31_1.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月19日 星期五 12时58分18秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <list>

int main(int argc, char *argv[])
{
    std::list<int> lst = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto iter = lst.begin();

    while (iter != lst.end()) {
        if (*iter % 2) {
            iter = lst.insert(iter, *iter);  //接收返回值,保证迭代器的有效性
            ++iter; ++iter;     //跳过新插入的元素和本元素
        } else {
            iter = lst.erase(iter);
        }
    }

    for (auto a : lst) {
        std::cout << a << " ";
    }
    std::cout << std::endl;
    
    return EXIT_SUCCESS;
}
