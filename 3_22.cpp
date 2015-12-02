/*************************************************************************
	> File Name: 3_22.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2015年12月02日 星期三 21时25分16秒
	> Description: 练习3.22
 ************************************************************************/
#include <iostream>
#include <vector>

int main(int argc, char *argv[])
{
    std::vector<std::string> text;
    std::string tmp;

    while (getline(std::cin, tmp)){
        text.push_back(tmp);
    }
    auto a = text.begin();
    for (a = a; a != text.end() && (!a->empty()); ++a){
        for (auto &c : (*a)){
            c = toupper(c);
        }
        std::cout << *a;
    }
    
    for (a = a; a != text.end(); ++a){
        std::cout << *a;
    } 

    std::cout << std::endl;
    
    return 0;
}
