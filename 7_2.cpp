/*************************************************************************
	> File Name: 7_2.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月02日 星期二 14时00分06秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>

struct Sales_data {
    std::string bookNo;
    std::string isbn() const {return bookNo;}
    Sales_data& combine(const Sales_data &rhs);
    unsigned units_sold = 0;
    double revenue = 0.0;
};

Sales_data& Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    
    return *this;
}

int main(int argc, char *argv[])
{
    
    return EXIT_SUCCESS;
}
