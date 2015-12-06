/*************************************************************************
	> File Name: 4_22.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2015年12月06日 星期日 19时18分50秒
	> Description: 习题4.22
 ************************************************************************/
#include <iostream>

int main(int argc, char *argv[])
{
    int score;

    std::cin >> score;
    
    //版本1,使用条件表达式
    std::cout << (score > 90 ? "High Pass" : (score >= 60 && score <= 75 ? "Low Pass" : (score < 60 ? "Fail" : "Pass")))
        << std::endl;

    //版本2,使用if-else语句
    std::string grade;
    
    if (score > 90) {
        grade = "High Pass";
    } else if (60 <= score && score <= 75) {
        grade = "Low Pass";
    } else if (score < 60) {
        grade = "Fail";
    } else {
        grade = "Pass";
    }

    std::cout << grade << std::endl;
    
    return 0;
}
