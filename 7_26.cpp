/*************************************************************************
	> File Name: 7_26.cpp
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
    Sales_data(std::istream &in);
    Sales_data() = default;
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
Sales_data::Sales_data(std::istream &in) {read(in, *this);}

int main(int argc, char *argv[])
{
    Sales_data total(std::cin);
    if (!total.isbn().empty()) {
        while (std::cin) {
            Sales_data trans(std::cin);
            if (total.isbn() == trans.isbn()) {
                total.combine(trans);
            } else {
                print(std::cout, total) << std::endl;
                total = trans;
            }
        }
        if (!total.isbn().empty()) {
            print(std::cout, total) << std::endl;
        }
    } else {
        std::cout << "没有数据!\n" << std::endl;
        return EXIT_FAILURE;
    }
    
    return EXIT_SUCCESS;
}
