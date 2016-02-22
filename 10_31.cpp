/*************************************************************************
	> File Name: 10_31.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月22日 星期一 23时00分44秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <vector>
#include <iterator>
#include <algorithm>

int main(int argc, char *argv[])
{
    std::istream_iterator<int> in(std::cin), eof;
    std::ostream_iterator<int> out(std::cout, " ");
    std::vector<int> vec(in, eof);
    
    sort(vec.begin(), vec.end());
    unique_copy(vec.begin(), vec.end(), out);

    std::cout << std::endl;
    
    return EXIT_SUCCESS;
}
