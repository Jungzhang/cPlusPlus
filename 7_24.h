/*************************************************************************
	> File Name: 7_24.h
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月04日 星期四 05时14分54秒
	> Description:
 ************************************************************************/
#ifndef _7_24_H
#define _7_24_H
class Screen {
public:
    using pos = std::string::size_type;
    Screen() = default;
    Screen(pos w, pos h) : height(h), width(w), contents("  "){}
    Screen(pos w, pos h, std::string c) : height(h), width(w), contents(c) {}
private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
};

#endif
