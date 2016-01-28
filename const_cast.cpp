/*************************************************************************
	> File Name: const_cast.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年01月28日 星期四 18时06分07秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>

const std::string &shorterString(const std::string &s1, const std::string &s2)
{
    return s1.size() <= s2.size() ? s1 : s2;
}

//由此程序可以看出const_cast的妙用
std::string &shorterString(std::string &s1, std::string &s2)
{
    //加上const
    auto &r = shorterString(const_cast<const std::string &> (s1), const_cast<const std::string &> (s2));

    //去掉const
    return const_cast<std::string &> (r);
}

int main(int argc, char *argv[])
{
    const std::string s1 = "aaaa";
    const std::string s2 = "bbb";

    std::string s3 = "ccc";
    std::string s4 = "d";

    const std::string &s5 = shorterString(s1, s2);
    std::string &s6 = shorterString(s3, s4);
    
    return EXIT_SUCCESS;
}
