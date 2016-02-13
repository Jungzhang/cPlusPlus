/*************************************************************************
	> File Name: 8_13.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月08日 星期一 12时56分16秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <sstream>
#include <vector>
#include <fstream>

struct PersonIfo {
    std::string name;
    std::vector<std::string> phones;
};

int main(int argc, char *argv[])
{
    if (argc < 2) {
        return EXIT_FAILURE;
    }

    std::string line, word;
    std::vector<PersonIfo> people;
    std::ifstream file(argv[1]);

    if (!file) {
        return EXIT_FAILURE;
    }

    while (getline(file, line)) {
        std::istringstream record;
        PersonIfo info;
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
