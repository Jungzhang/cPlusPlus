/*************************************************************************
	> File Name: 9_44.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月19日 星期五 16时00分18秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <string>

void Replace(std::string &s,  const std::string &OldVal, const std::string &NewVal)
{
    int iter = 0;

    while(iter != s.size()) {
        if (s.substr(iter, OldVal.size()) == OldVal) {
            s.replace(iter, OldVal.size(), NewVal);
            iter = iter + NewVal.size() - 1;
        }
        ++iter;
    }
}

int main(int argc, char *argv[])
{
    std::string s = "JungZhang are God!";
    std::cout << s << std::endl;
    Replace(s, "are", "is");
    std::cout << s << std::endl;
    
    return EXIT_SUCCESS;
}
