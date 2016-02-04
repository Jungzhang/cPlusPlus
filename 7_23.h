/*************************************************************************
	> File Name: 7_23.h
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月04日 星期四 05时14分54秒
	> Description:
 ************************************************************************/
#ifndef _7_23_H
#define _7_23_H
class Screen {
public:
    using pos = std::string::size_type;
private:
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
};

#endif
