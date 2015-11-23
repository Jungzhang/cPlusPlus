/*************************************************************************
	> File Name: 4.cpp
	> Author: jungzhang
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2015年11月18日 星期三 14时38分45秒
	> Description: width
 ************************************************************************/

#include <iostream>

using namespace std;

int main(void)
{
    int width = 4;
    char str[20];

    cout << "请输入一段文本：";
    cin.width(5);   //输入的width,表示一次性读入的数字位数是width-1

    while(cin >> str){
        cout.width(width++);    //输出的width,表示一次性输出的数字位数是width-1,不足时用空格补齐
        cout << str << endl;
        cin.width(5);
    }

    return 0;
}
