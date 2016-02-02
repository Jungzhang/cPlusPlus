/*************************************************************************
	> File Name: 7_9.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月02日 星期二 14时39分27秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>

struct Person {
    std::string name;
    std::string adder;
    std::string getName() const {return name;}
    std::string getAdder() const {return adder;}
};

std::istream &read(std::istream &in, Person &data)
{
    in >> data.name >> data.adder;

    return in;
}

std::ostream &print(std::ostream &out, const Person &data)
{
    out << data.name << " " << data.adder;

    return out;
}

int main(int argc, char *argv[])
{
    
    return EXIT_SUCCESS;
}
