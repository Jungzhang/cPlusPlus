/*************************************************************************
	> File Name: 12_6.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年03月04日 星期五 20时24分27秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <vector>

std::vector<int> *CreateVector()
{
    return new std::vector<int>;
}

const std::vector<int> *InputVal(std::vector<int> *v)
{
    int val;

    while (std::cin >> val) {
        v->push_back(val);
    }

    return v;
}

void PrintVector(const std::vector<int> *v)
{
    for (auto a : *v) {
        std::cout << a << " ";
    }
    std::cout << std::endl;

    delete v;
}

int main(int argc, char *argv[])
{
    auto v = CreateVector();
    auto b = InputVal(v);
    PrintVector(b);
    
    return EXIT_SUCCESS;
}
