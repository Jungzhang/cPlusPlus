/*************************************************************************
	> File Name: 10_33.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月23日 星期二 11时42分19秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <iterator>
#include <algorithm>
#include <fstream>

int main(int argc, char *argv[])
{
    if (argc < 3) {
        return EXIT_FAILURE;
    }
    
    std::ifstream in(argv[1]);
    std::ofstream out1(argv[2]);
    std::ofstream out2(argv[3]);
    
    if ((!in) || (!out1) || (!out2)) {
        return EXIT_FAILURE;
    }

    std::istream_iterator<int> iter_in(in), eof;
    std::ostream_iterator<int> iter_out1(out1, " ");
    std::ostream_iterator<int> iter_out2(out2, "\n");

    while (iter_in != eof) {
        if (*iter_in % 2) {
            iter_out1 = *iter_in;
        } else {
            iter_out2 = *iter_in;
        }
        ++iter_in;
    }

    in.close();
    out1.close();
    out2.close();
    
    return EXIT_SUCCESS;
}
