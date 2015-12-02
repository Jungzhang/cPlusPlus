/*************************************************************************
	> File Name: 3_20.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2015年12月02日 星期三 17时49分01秒
	> Description: 练习3.20
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

    for (decltype(v.size()) i = 0; i < v.size(); i++){
        if (i + 1 < v.size()){
            std::cout << v[i] + v[i + 1] << "   ";
        } else {
            std::cout << v[i];
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

    for (decltype(v.size()) i = 0, j = v.size() - 1; i < j; i++, j--){
        std::cout << v[i] + v[j] << "    ";
    }

    std::cout << std::endl;
}

int main(int argc, char *argv[])
{
    func1();
    func2();
    
    return 0;
}
