/*************************************************************************
	> File Name: 9_43.cpp
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
    auto iter = s.begin();

    while(iter != s.end()) {
        if (distance(iter, s.end()) < distance(OldVal.begin(), OldVal.end())) {
            break;
        }
        if (std::string(iter, iter + OldVal.size()) == OldVal) {
            auto a = distance(s.begin(), iter) - 1;
            iter = s.erase(iter, iter + OldVal.size());
            s.insert(iter, NewVal.begin(), NewVal.end());
            iter = s.begin() + a + NewVal.size();
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
