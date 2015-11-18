/*************************************************************************
	> File Name: 2.cpp
	> Author: jungzhang
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2015年11月18日 星期三 10时00分51秒
	> Description: cout.precision()练习
 ************************************************************************/
#include <iostream>
#include <math.h>

using namespace std;

int main(void)
{
    double result = sqrt(3.0);
    cout << "对 3 开方保留小数点后 0 ～ 9 位,结果如下：" << endl;

    for (int i = 1; i <= 9; i++){
        cout.precision(i);  //表示输出小数点后 i - 1位
        cout << result << endl;
    }

    cout << "当前的输出精度为：" << cout.precision() << endl;

    return 0;
}
