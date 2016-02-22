/*************************************************************************
	> File Name: 10_17.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月02日 星期一 14时20分16秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>
#include <vector>
#include <algorithm>

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
    Sales_data(std::string No) : bookNo(No) {}
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
    Sales_data a1("123"), a2("456"), a3("789"), a4("1234");
    std::vector<Sales_data> v = {a1, a2, a3, a4};
    
    sort(v.begin(), v.end(), [](const Sales_data &s1, const Sales_data &s2) {return s1.isbn() < s2.isbn();});

    for (auto a : v) {
        std::cout << a.isbn() << " ";
    }
    std::cout << std::endl;
    
    return EXIT_SUCCESS;
}
