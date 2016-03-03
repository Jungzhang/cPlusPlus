/*************************************************************************
	> File Name: 12_2.h
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年03月03日 星期四 22时05分20秒
	> Description:
 ************************************************************************/
#ifndef _12_2_H
#define _12_2_H

#include <vector>
#include <string>
#include <initializer_list>
#include <memory>
#include <exception>

class StrBlob {
public :
    typedef std::vector<std::string>::size_type size_type;
    
    //构造函数
    StrBlob() : data(std::make_shared<std::vector<std::string>> ()){};
    StrBlob(std::initializer_list<std::string> il) : data(std::make_shared<std::vector<std::string>> (il)) {};

    //内容多少操作
    size_type size() const { return data->size(); }
    bool empty() const { return data->empty(); }

    //增加和删除
    void push_back(const std::string &s) { data->push_back(s); }
    void pop_back() {check(0, "pop_back"); data->pop_back();}

    //元素访问
    std::string &front() {check(0, "front"); data->front();}
    std::string &back() {check(0, "back"); data->back();}
    const std::string &front() const {check(0, "const front"); data->front();}
    const std::string &back() const {check(0, "const back"); data->back();}

private:
    std::shared_ptr<std::vector<std::string>> data;
    void check(size_type i, const std::string &msg) const
    {
        if (i >= data->size()) {
            throw std::out_of_range(msg);
        }
    };
};

#endif
