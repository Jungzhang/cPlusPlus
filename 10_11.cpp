/*************************************************************************
	> File Name: 10_11.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月21日 星期日 17时40分21秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <numeric>

bool isShorter(const std::string &s1, const std::string &s2)
{
    return s1.size() < s2.size();
}

void elimdups(std::vector<std::string> &v)
{
    sort(v.begin(), v.end());
    auto EndUnique = unique(v.begin(), v.end());

    v.erase(EndUnique, v.end());
}

int main(int argc, char *argv[])
{
    std::vector<std::string> v;
    std::string str;
    
    while(std::cin >> str) {
        v.push_back(str);
    }
    
    elimdups(v);
    stable_sort(v.begin(), v.end(), isShorter);

    for (auto a : v) {
        std::cout << a << " ";
    }
    std::cout << std::endl;
    
    return EXIT_SUCCESS;
}
