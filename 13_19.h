/*************************************************************************
	> File Name: 13_19.h
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org
	> Created Time: 2017年01月15日 星期日 18时09分29秒
	> Description:
 ************************************************************************/
#ifndef _13_19_H
#define _13_19_H

class Employee {
private:
    static int nowId;
    std::string name;
    int id;
public:
    Employee();
    Employee(const std::string &name);
    Employee(const Employee &e) = delete;
    Employee &operator=(const Employee &e) = delete;
};

Employee::nowId = 0;

Employee::Employee() {
    id = nowId++;
}

#endif
