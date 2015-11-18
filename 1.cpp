/*************************************************************************
	> File Name: 1.cpp
	> Author: jungzhang
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2015年11月16日 星期一 15时22分30秒
	> Description: 文件操作练习,程序运行时需要有一个test.txt文件
 ************************************************************************/

#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
    fstream fp("test.txt", ios::in | ios::out);

    if(!fp){
        cerr << "打开文件失败!" << endl;
        return 0;
    }

    fp << "WellcomeXiyouLinux";

    char str[100];
    fp.seekg(ios::beg);
    fp >> str;
    cout << str << endl;
    fp.close();

    return 0;
}
