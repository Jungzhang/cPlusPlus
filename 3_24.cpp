/*************************************************************************
	> File Name: 3_24.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2015年12月02日 星期三 17时49分01秒
	> Description: 练习3.24
 ************************************************************************/
#include <iostream>
#include <vector>

void func1(void)
{
    std::vector<int> v;
    int tmp;

    while(std::cin >> tmp){
        if (tmp == -10000)
            break;
        v.push_back(tmp);
    }

    for (auto i = v.begin(); i != v.end(); i++){
        if (i + 1 < v.end()){
            std::cout << *i + *(i+1) << "   ";
        } else {
            std::cout << *i;
        }
    }

    std::cout << std::endl;
}

void func2(void)
{
    std::vector<int> v;
    int tmp;

    while(std::cin >> tmp){
        if (tmp == -10000)
            break;
        v.push_back(tmp);
    }

    for (auto i = v.begin(), j = v.end() - 1; i < j; i++, j--){
        std::cout << *i + *j << "    ";
    }

    std::cout << std::endl;
}

int main(int argc, char *argv[])
{
    func1();
    func2();
    
    return 0;
}
