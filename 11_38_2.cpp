/*************************************************************************
	> File Name: 11_38_2.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年03月03日 星期四 17时30分58秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <map>
#include <unordered_map>
#include <fstream>
#include <sstream>

void buildMap(std::unordered_map<std::string, std::string> &tran_map, std::ifstream &map_file)
{
    std::string str;
    while (getline(map_file, str)) {
        std::string key, val;
        std::istringstream str_stream(str);
        str_stream >> key >> val;
        if (val.size() < 1) {
            std::cerr << "No data!" << std::endl;
            exit(-1);
        }
        tran_map[key] = val;
    }
}

const std::string &transform(const std::unordered_map<std::string, std::string> &tran_map, const std::string &source)
{
    auto iter = tran_map.find(source);

    if (iter != tran_map.cend()) {
        return iter->second;
    } else {
        return source;
    }
}

void word_transform(std::ifstream &map_file, std::ifstream &input_file)
{
    std::unordered_map<std::string, std::string> tran_map;
    buildMap(tran_map, map_file);
    std::string tmp;

    while (getline(input_file, tmp)) {
        std::istringstream str_stream(tmp);
        std::string word;
        bool first_word = true;
        while (str_stream >> word) {
            if (first_word) {
                first_word = false;
            } else {
                std::cout << " ";
            }
            std::cout << transform(tran_map, word);
        }
        std::cout << std::endl;
    }
}

int main(int argc, char *argv[])
{
    if (argc < 3) {
        std::cerr << "参数有误!" << std::endl;
        return EXIT_FAILURE;
    }
    
    std::ifstream map_file(argv[1]);
    std::ifstream input_file(argv[2]);
    
    if (!(map_file && input_file)) {
        std::cerr << "文件打开失败!" << std::endl;
        return EXIT_FAILURE;
    }

    word_transform(map_file, input_file);
    
    return EXIT_SUCCESS;
}
