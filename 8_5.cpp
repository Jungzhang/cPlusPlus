/*************************************************************************
	> File Name: 8_5.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月06日 星期六 15时52分02秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>

void func(std::string fileName, std::vector<std::string> &s)
{
    if (fileName.empty()) {
        std::cout << "文件名不正确" << std::endl;
        return;
    }
    std::ifstream file(fileName);
    if (file) {
        std::string temp;
        while(file >> temp) {
            s.push_back(temp);
        }
    }
    file.close();
}

int main(int argc, char *argv[])
{
    std::vector<std::string> s;
    func("text", s);
    for(auto a : s) {
        std::cout << a << std::endl;
    }
    
    return EXIT_SUCCESS;
}
