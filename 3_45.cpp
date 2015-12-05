/*************************************************************************
	> File Name: 3_45.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2015年12月05日 星期六 22时28分18秒
	> Description: 练习3.45
 ************************************************************************/
#include <iostream>

int main(int argc, char *argv[])
{
    int ia[3][4], i = 100;

    for (auto &a : ia){
        for (auto &b : a){
            b = i;
            i++;
        }
    }
    
    //版本1,范围for语句,注意使用引用
    for (auto &a : ia){
        for (auto b : a){
            std::cout << b << "\t";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    //版本2,普通for语句,但使用下标运算符
    for (size_t i = 0; i != 3; i++){
        for (size_t j = 0; j != 4; j++){
            std::cout << ia[i][j] << "\t";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;

    //版本3,普通for语句,但使用指针
    for (auto i = ia; i != ia + 3; i++){   //i是int a[4]型数组的指针
        for (auto j = *i; j != *i+4; j++){      //j是int型的指针,对i取值后就是int a[4]型数组
            std::cout << *j << "\t";
        }
        std::cout << std::endl;
    }
    
    return 0;
}
