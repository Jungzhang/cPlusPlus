/*************************************************************************
	> File Name: 9_51.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月20日 星期六 12时19分57秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <string>

class Date {
public:
    unsigned year;
    unsigned month;
    unsigned day;
    Date(std::string &date);
};

Date::Date(std::string &date)
{
    int format = 0;

    //判断分割方式
    if (date.find_first_of(",") != std::string::npos) {
        format = 1;     //逗号分割
    } else if (date.find_first_of("/") != std::string::npos) {
        format = 2;     //斜杠分割
    } else {
        format = 3;
    }

    switch (format) {
    case 1:
    case 3:
        day = stoi(date.substr(date.find_first_of("0123456789"), date.find_first_of(",") - date.find_first_of("0123456789")));
        year = stoi(date.substr(date.find_last_of(" ") + 1));
        if (date.find("Jan") < date.size()) {
            month = 1;
        } else if (date.find("Feb") < date.size()) {
            month = 2;
        } else if (date.find("Mar") < date.size()) {
            month = 3;
        } else if (date.find("Apr") < date.size()) {
            month = 4;
        } else if (date.find("May") < date.size()) {
            month = 5;
        } else if (date.find("Jun") < date.size()) {
            month = 6;
        } else if (date.find("Jul") < date.size()) {
            month = 7;
        } else if (date.find("Aug") < date.size()) {
            month = 8;
        } else if (date.find("Sep") < date.size()) {
            month = 9;
        } else if (date.find("Oct") < date.size()) {
            month = 10;
        } else if (date.find("Nov") < date.size()) {
            month = 11;
        } else if (date.find("Dec") < date.size()) {
            month = 12;
        }
            break;
    case 2:
            month = stoi(date.substr(0, date.find_first_of("/")));
            day = stoi(date.substr(date.find_first_of("/") + 1, date.find_last_of("/") - date.find_first_of("/") - 1));
            year = stoi(date.substr(date.find_last_of("/") + 1));
    }
    if (format == 1) {
        day = stoi(date.substr(date.find_first_of("0123456789"), date.find_first_of(",") - date.find_first_of("0123456789")));
        year = stoi(date.substr(date.find_last_of(" ") + 1));       
    } else if (format == 3) {
        day = stoi(date.substr(date.find_first_of("0123456789"), date.find_last_of(" ") - date.find_first_of("0123456789")));
        year = stoi(date.substr(date.find_last_of(" ") + 1));
    }

}

int main(int argc, char *argv[])
{
    std::string s;
    getline(std::cin, s);
    Date d(s);
    std::cout << "年：" << d.year << "\t" << "月：" << d.month << "\t" << "日：" << d.day << std::endl;
    
    return EXIT_SUCCESS;
}
