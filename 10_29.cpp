/*************************************************************************
	> File Name: 10_29.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月22日 星期一 22时39分16秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <vector>
#include <iterator>
#include <fstream>
#include <algorithm>

int main(int argc, char *argv[])
{
    if (argc < 2) {
        return EXIT_FAILURE;
    }

    std::ifstream in(argv[1]);

    if (!in) {
        return EXIT_FAILURE;
    }

    std::istream_iterator<std::string> eof, iter(in);

    std::vector<std::string> vec(iter, eof);
    
    for (auto a : vec) {
        std::cout << a << " ";
    }
    std::cout << std::endl;
    
    return EXIT_SUCCESS;
}
