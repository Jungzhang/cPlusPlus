/*************************************************************************
	> File Name: 10_19.cpp
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

void elimdups(std::vector<std::string> &v)
{
    sort(v.begin(), v.end());
    auto EndUnique = unique(v.begin(), v.end());

    v.erase(EndUnique, v.end());
}

void biggies(std::vector<std::string> &words, std::vector<std::string>::size_type sz)
{
    elimdups(words);

    //使用lambda表达式
    stable_sort(words.begin(), words.end(), 
                [](const std::string &s1, const std::string &s2) 
                {return s1.size() < s2.size();});

    //使用find_if获取满足条件的元素
    auto wc =stable_partition(words.begin(), words.end(), [sz](const std::string &s){return s.size() >= sz;});
    
    std::cout << "一共有：" << words.end() - wc - 1 << "个" << std::endl;
    for_each(words.begin(), wc, [](const std::string &s) {std::cout << s << " ";});

    std::cout << std::endl;
}

int main(int argc, char *argv[])
{
    std::vector<std::string> v;
    std::string str;
    
    while(std::cin >> str) {
        v.push_back(str);
    }
    
    biggies(v, 5);
    
    return EXIT_SUCCESS;
}
