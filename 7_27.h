/*************************************************************************
	> File Name: 7_27.h
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月04日 星期四 05时14分54秒
	> Description:
 ************************************************************************/
#ifndef _7_27_H
#define _7_27_H
class Screen {
public:
    using pos = std::string::size_type;
    Screen() = default;
    Screen(pos w, pos h) : height(h), width(w), contents("  "){}
    Screen(pos w, pos h, std::string c) : height(h), width(w), contents(c) {}
    inline Screen &move(pos w, pos h);
    inline Screen &set(pos w, pos h, std::string data);
    inline Screen &set(std::string data);
    Screen &display(Screen &data) {do_display(data); return *this;}
    const Screen &display(Screen &data) const {do_display(data); return *this;}
private:
    void do_display(Screen &data) const {}
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
};

#endif
