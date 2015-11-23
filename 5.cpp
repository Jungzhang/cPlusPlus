/*************************************************************************
	> File Name: 5.cpp
	> Author: jungzhang
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2015年11月18日 星期三 15时29分15秒
	> Description: 文件复制操作
 ************************************************************************/
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[])
{
    ofstream out(argv[1], ios::trunc);
    ifstream in(argv[2]);
    char ch;

    if (argc != 3){
        cout << "参数输入有误" << endl;
        return 0;
    }
    
    if (!out){
        cerr << "源文件打开失败" << endl;
    }

    if (!in){
        cerr << "目标文件打开失败" << endl;
    }

    while((ch = in.get()) != EOF){
        out.put(ch);
    }

    in.close();
    out.close();

    return 0;
}
