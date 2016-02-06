/*************************************************************************
	> File Name: 7_53.h
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月06日 星期六 12时19分54秒
	> Description:
 ************************************************************************/
#ifndef _7_53_H
#define _7_53_H

class Debug {
public:
    constexpr Debug(bool b) : hw(b), io(b), other(b) {}
    constexpr Debug(bool h, bool i, bool o) : hw(h), io(i), other(o) {}
    constexpr bool any() const {return hw || io || other;}
    void set_io(bool b) {io = b;}
    void set_hw(bool b) {hw = b;}
    void set_other(bool b) {other = b;}
private:
    bool hw;
    bool io;
    bool other;
};

#endif
