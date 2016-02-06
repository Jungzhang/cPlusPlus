/*************************************************************************
	> File Name: 7_50.cpp
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
    Person() = default;
    explicit Person(std::string &n) : name(n) {}
    Person(const std::string &name, const std::string &adder) : name(name), adder(adder) {}
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
