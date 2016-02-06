/*************************************************************************
	> File Name: 7_57.h
	> Author: Jung
	> Mail: jungzhang@xiyoulinux.org  or  zhanggen.jung@gmail.com
	> Created Time: 2016年02月06日 星期六 13时23分12秒
	> Description:
 ************************************************************************/
#ifndef _7_57_H
#define _7_57_H

class Account {
public : 
    void calculate() {amount += amount * interestRate;}
    static double rate() {return interestRate;}
    static void rate(double newRate) {interestRate = newRate;}
private :
    std::string owner;
    static constexpr double todayRate = 0.57;
    double amount;
    static double interestRate;
    static double initRate() {return todayRate;}
};

double Account::interestRate = initRate();

#endif
