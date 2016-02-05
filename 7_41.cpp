/*************************************************************************
	> File Name: 7_41.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月02日 星期一 14时20分16秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>

struct Sales_data {
    friend std::istream &read(std::istream &in, Sales_data &data);
    friend std::ostream &print(std::ostream &out, const Sales_data &data);

private:
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
public:
    std::string isbn() const {return bookNo;}
    Sales_data& combine(const Sales_data &rhs);
    Sales_data(std::string no, unsigned sold, double re) : bookNo(no), units_sold(sold), revenue(re) {std::cout << "三参数" << std::endl;}
    Sales_data() : Sales_data("", 0, 0.0) {std::cout << "默认构造" << std::endl;}
    Sales_data(std::istream &in) : Sales_data() {read(in, *this); std::cout << "istream构造函数" << std::endl;}
private:
    inline double avg_price() const;
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
    Sales_data a;
    Sales_data b(std::cin);
    Sales_data c("11-22-33-44", 10, 20);


    return EXIT_SUCCESS;
}
