/*************************************************************************
	> File Name: 6_42.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年01月30日 星期六 13时02分51秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>

std::string make_plural(size_t ctr, const std::string &word, const std::string &ending = "s")
{
    return (ctr > 1) ? word + ending : word;
}

int main(int argc, char *argv[])
{
    std::cout << "请输入word和ctr,以空格分割 : ";
    int ctr;
    std::string word;
    std::cin >> ctr >> word;
    std::cout << make_plural(ctr, word) << std::endl;
    
    return EXIT_SUCCESS;
}
