/*************************************************************************
	> File Name: 12_22.h
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年03月03日 星期四 22时05分20秒
	> Description:
 ************************************************************************/
#ifndef _12_22_H
#define _12_22_H

#include <vector>
#include <string>
#include <initializer_list>
#include <memory>
#include <exception>

class ConstStrBlobPtr;

class StrBlob {
    friend class ConstStrBlobPtr;
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
    std::string &front() {check(0, "front"); return data->front();}
    std::string &back() {check(0, "back"); return data->back();}
    const std::string &front() const {check(0, "const front"); return data->front();}
    const std::string &back() const {check(0, "const back"); return data->back();}

    //begin和end
    ConstStrBlobPtr begin();
    ConstStrBlobPtr end();

private:
    std::shared_ptr<std::vector<std::string>> data;
    void check(size_type i, const std::string &msg) const
    {
        if (i >= data->size()) {
            throw std::out_of_range(msg);
        }
    };
};

class ConstStrBlobPtr {
public:
    ConstStrBlobPtr() : curr(0) {}
    ConstStrBlobPtr(const StrBlob &a, size_t sz = 0) : wptr(a.data), curr(sz) {}
    bool operator!=(const ConstStrBlobPtr& p) const { return p.curr != curr;  }
    std::string &deref() const
    {
        auto p = check(curr, "dereference past end.");
        
        return (*p)[curr];
    }
    ConstStrBlobPtr &incr()
    {
        check(curr, "increment past end of ConstStrBlobPtr");
        ++curr;
        
        return *this;
    }
private:
    std::shared_ptr<std::vector<std::string>> check(std::size_t i, const std::string &msg) const 
    {
        std::shared_ptr<std::vector<std::string>> ret = wptr.lock();
        if (!ret) {
            throw std::runtime_error("unbound ConstStrBlobPtr");
        }
        if (i >= ret->size()) {
            throw std::out_of_range(msg);
        }
        return ret;
    }
    std::weak_ptr<std::vector<std::string>> wptr;
    std::size_t curr;
};
ConstStrBlobPtr StrBlob::begin() { return ConstStrBlobPtr(*this); }
ConstStrBlobPtr StrBlob::end() { return ConstStrBlobPtr(*this, data->size()); }

#endif
