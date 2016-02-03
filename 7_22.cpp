/*************************************************************************
	> File Name: 7_22.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月02日 星期二 14时39分27秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>

struct Person {
private:
    std::string name;
    std::string adder;
public:
    std::string getName() const {return name;}
    std::string getAdder() const {return adder;}
    Person() = default;
    Person(const std::string &name, const std::string &adder) : name(name), adder(adder) {}
    friend std::istream &read(std::istream &in, Person &data);
    friend std::ostream &print(std::ostream &out, const Person &data);
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
