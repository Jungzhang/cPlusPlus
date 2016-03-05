/*************************************************************************
	> File Name: 12_20.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年03月05日 星期六 22时59分52秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <fstream>

#include "12_19.h"

int main(int argc, char *argv[])
{
    if (argc < 2) {
        return EXIT_FAILURE;
    }

    std::ifstream in(argv[1]);

    if (!in) {
        return EXIT_FAILURE;
    }

    StrBlob str;
    std::string words;
    
    while (getline(in, words)) {
        str.push_back(words);
    }

    for (StrBlobPtr pBegin(str.begin()), pEnd(str.end()); pBegin != pEnd; pBegin.incr()) {
        std::cout << pBegin.deref() << std::endl;
    }
    
    return EXIT_SUCCESS;
}
