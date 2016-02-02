/*************************************************************************
	> File Name: 7_3.cpp
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
};

Sales_data& Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;

    return *this;
}

int main(int argc, char *argv[])
{
    Sales_data total;
    if (std::cin >> total.bookNo >> total.units_sold >> total.revenue) {
        Sales_data trans;
        while (std::cin >> trans.bookNo >> trans.units_sold >> trans.revenue) {
            if (total.isbn() == trans.isbn()) {
                total.combine(trans);
            } else {
                std::cout << "bookNo : " << total.isbn() << "\t";
                std::cout << "units_sold : " << total.units_sold << "\t";
                std::cout << "revenue : " << total.revenue << std::endl;
                total = trans;
            }
        }
        std::cout << "bookNo : " << total.isbn() << "\t";
        std::cout << "units_sold : " << total.units_sold << "\t";
        std::cout << "revenue : " << total.revenue << std::endl;
    } else {
        std::cout << "没有数据!\n" << std::endl;
        return EXIT_FAILURE;
    }
    
    return EXIT_SUCCESS;
}
