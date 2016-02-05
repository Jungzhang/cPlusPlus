/*************************************************************************
	> File Name: 7_42.h
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月05日 星期五 15时59分00秒
	> Description:
 ************************************************************************/
#ifndef _7_42_H
#define _7_42_H

class Date {
private:
    std::string year;
    std::string month;
    std::string day;
    std::string hour;
    std::string minute;
    std::string second;
public:
    Date(std::string y, std::string m, std::string d, std::string h, std::string mi, std::string s) : year(y), month(m), day(d), minute(mi), second(s) {}
    Date() : Date("", "", "", "", "", "") {}
};

#endif
