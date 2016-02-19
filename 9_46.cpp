/*************************************************************************
	> File Name: 9_46.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月19日 星期五 17时08分48秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <string>

std::string name(std::string &OldName, std::string &pre, std::string &post)
{
    auto NewName = OldName;

    NewName.insert(0, pre);
    NewName.insert(NewName.size(), post);

    return NewName;
}

int main(int argc, char *argv[])
{
    std::string OldName = "Jung";
    std::string pre = "Mr.";
    std::string post = "Zhang";

    std::cout << name(OldName, pre, post) << std::endl;
    
    return EXIT_SUCCESS;
}
