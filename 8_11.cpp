/*************************************************************************
	> File Name: 8_11.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月08日 星期一 12时56分16秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <vector>

struct PersonIfo {
    std::string name;
    std::vector<std::string> phones;
};

int main(int argc, char *argv[])
{
    std::string line, word;
    std::vector<PersonIfo> people;
    std::istringstream record;

    while (getline(std::cin, line)) {
        PersonIfo info;
        record.clear();
        record.str(line);
        record >> info.name;
        while (record >> word) {
            info.phones.push_back(word);
        }
        people.push_back(info);
    }

    for(auto a : people) {
        std::cout << a.name << " ";
        for (auto b : a.phones) {
            std::cout << b << " ";
        }
        std::cout << std::endl;
    }
    
    return EXIT_SUCCESS;
}
