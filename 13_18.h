/*************************************************************************
	> File Name: 13_18.h
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org
	> Created Time: 2017年01月15日 星期日 18时09分29秒
	> Description:
 ************************************************************************/
#ifndef _13_18_H
#define _13_18_H

class Employee {
private:
    static int nowId;
    std::string name;
    int id;
public:
    Employee();
    Employee(const std::string &name);
};

Employee::nowId = 0;

Employee::Employee() {
    id = nowId++;
}

Employee::Employee(const std::string &name) {
    id = nowId++;
    name = name;
}

#endif
