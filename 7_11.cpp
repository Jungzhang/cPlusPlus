/*************************************************************************
	> File Name: 7_11.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月02日 星期一 14时20分16秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>

struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;

    std::string isbn() const {return bookNo;}
    Sales_data& combine(const Sales_data &rhs);
    Sales_data() = default;
    Sales_data(const std::string &bookNo) {this->bookNo = bookNo;}
    Sales_data(const std::string &bookNo, const unsigned &units_sold)
    {
        this->bookNo = bookNo;
        this->units_sold = units_sold;
    }
    Sales_data(const std::string &bookNo, const unsigned &units_sold, const double revenue)
    {
        this->bookNo = bookNo;
        this->units_sold = units_sold;
        this->revenue = revenue;
    }
};

int main(int argc, char *argv[])
{
    Sales_data total;
    Sales_data a("111");
    Sales_data b("222", 12);
    Sales_data c("333", 12, 23);
    
    return EXIT_SUCCESS;
}
