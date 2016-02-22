/*************************************************************************
	> File Name: 10_9.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月21日 星期日 17时40分21秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>

int main(int argc, char *argv[])
{
    std::vector<std::string> v;
    std::string str;
    
    while(std::cin >> str) {
        v.push_back(str);
    }
    
    sort(v.begin(), v.end());
    auto EndUnique = unique(v.begin(), v.end());

    v.erase(EndUnique, v.end());

    for (auto a : v) {
        std::cout << a << " ";
    }
    std::cout << std::endl;
    
    return EXIT_SUCCESS;
}
