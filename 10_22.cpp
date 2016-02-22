/*************************************************************************
	> File Name: 10_22.cpp
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
#include <functional>

void elimdups(std::vector<std::string> &v)
{
    sort(v.begin(), v.end());
    auto EndUnique = unique(v.begin(), v.end());

    v.erase(EndUnique, v.end());
}

bool check_size(const std::string &s, std::string::size_type sz)
{
    return s.size() >= sz;
}

void biggies(std::vector<std::string> &words, std::vector<std::string>::size_type sz)
{
    elimdups(words);

    //使用lambda表达式
    stable_sort(words.begin(), words.end(), 
                [](const std::string &s1, const std::string &s2) 
                {return s1.size() < s2.size();});

    //使用find_if获取满足条件的元素
    auto wc = find_if(words.begin(), words.end(), bind(check_size, std::placeholders::_1, sz));
    
    auto five_count = count_if(words.begin(), words.end(), [=](const std::string &s){return s.size() >= sz;});
    std::cout << "一共有：" << five_count << "个" << std::endl;
    for_each(wc, words.end(), [](const std::string &s) {std::cout << s << " ";});

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
