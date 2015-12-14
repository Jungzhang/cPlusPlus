/*************************************************************************
	> File Name: 5_25.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2015年12月14日 星期一 20时05分14秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <stdexcept>

int main(int argc, char *argv[])
{
    int num1, num2;

    while (true) {
        try {
            std::cout << "请输入两个数字：";
            std::cin >> num1 >> num2;
            if (num2 == 0) {
                throw std::runtime_error("除数为0");
            }
            std::cout << num1 / num2 << std::endl;
            break;
        } catch (std::runtime_error err) {
            std::cout << err.what() << std::endl << "是否重新输入(y/n)？";
            char key;
            std::cin >> key;
            if (key == 'n' || key == 'N') {
                break;
            }
        }
    }
    
    return 0;
}
