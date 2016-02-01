/*************************************************************************
	> File Name: 7_1.cpp
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月01日 星期一 17时20分16秒
	> Description:
 ************************************************************************/
#include <iostream>
#include <cstdlib>

struct Sales_data {
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main(int argc, char *argv[])
{
    Sales_data total;
    if (std::cin >> total.bookNo >> total.units_sold >> total.revenue) {
        Sales_data trans;
        while (std::cin >> trans.bookNo >> trans.units_sold >> trans.revenue) {
            if (total.bookNo == trans.bookNo) {
                total.units_sold += trans.units_sold;
                total.revenue += trans.revenue;
            } else {
                std::cout << "bookNo : " << total.bookNo << "\t";
                std::cout << "units_sold : " << total.units_sold << "\t";
                std::cout << "revenue : " << total.revenue << std::endl;
                total = trans;
            }
        }
        std::cout << "bookNo : " << total.bookNo << "\t";
        std::cout << "units_sold : " << total.units_sold << "\t";
        std::cout << "revenue : " << total.revenue << std::endl;
    } else {
        std::cout << "没有数据!\n" << std::endl;
        return EXIT_FAILURE;
    }
    
    return EXIT_SUCCESS;
}
