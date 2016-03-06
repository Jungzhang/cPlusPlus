/*************************************************************************
	> File Name: 12_27.h
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年03月06日 星期日 16时37分16秒
	> Description:
 ************************************************************************/
#ifndef _12_27_H
#define _12_27_H

#include <vector>
#include <map>
#include <set>
#include <memory>
#include <fstream>
#include <iostream>
#include <sstream>

class QueryResult;
class TextQuery {
public:
    using line_no = std::vector<std::string>::size_type;
    TextQuery(std::ifstream &in)
    {
        std::string text; 
        while (getline(in, text)) {
            file->push_back(text);  //读取的内容插入进vector
            int n = file->size();   //读取行号
            std::istringstream line(text);  //定义流
            std::string word; 
            while (line >> word) {  //从流中每次读取一个单词
                auto &lines = wm[word];     //从map中选择保存出现行号的set
                if (!lines) {   //如果保存行号的set未分配空间(该单词还未出现过)
                    lines.reset(new std::set<line_no>);     //分配空间
                } 
                lines->insert(n);   //插入出现的行号
            }
        }
    }
    QueryResult query(const std::string &) const;
private:
    std::shared_ptr<std::vector<std::string>> file;     //保存文件中的每一行文本
    std::map<std::string, std::shared_ptr<std::set<line_no>>> wm;   //保存文件中的每一个单词和出现过该单词行号的映射
};

class QueryResult {
friend std::ostream print(std::ostream &out, const QueryResult &);
public :
    QueryResult(std::string s, std::shared_ptr<std::set<TextQuery::line_no>> p, std::shared_ptr<std::vector<std::string>> f) :
    sought(s), lines(p), file(f) {}
private :
    std::string sought;
    std::shared_ptr<std::set<TextQuery::line_no>> lines;
    std::shared_ptr<std::vector<std::string>> file;
};
std::ostream print(std::ostream &out, const QueryResult &);

#endif
