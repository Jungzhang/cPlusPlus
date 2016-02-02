/*************************************************************************
	> File Name: 7_6.cpp
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

std::istream &read(std::istream &in, Sales_data &data)
{
    in >> data.bookNo >>  data.units_sold >> data.revenue;

    return in;
}

std::ostream &print(std::ostream &out, const Sales_data &data)
{
    out << data.bookNo << " " << data.units_sold << " " << data.revenue;

    return out;
}

Sales_data& Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;

    return *this;
}

int main(int argc, char *argv[])
{
    Sales_data total;
    if (read(std::cin, total)) {
        Sales_data trans;
        while (read(std::cin, trans)) {
            if (total.isbn() == trans.isbn()) {
                total.combine(trans);
            } else {
                print(std::cout, total);
                total = trans;
            }
        }
        print(std::cout, total);
    } else {
        std::cout << "没有数据!\n" << std::endl;
        return EXIT_FAILURE;
    }
    
    return EXIT_SUCCESS;
}
