//
// Created by sunjiaming on 19-5-24.
//

#ifndef EX_7_11_7_11_H
#define EX_7_11_7_11_H
#include <string>
#include <iostream>
using namespace std;
class Sales_data{
public:
    Sales_data = default;
    Sales_data(const string &book):bookNo(book){}
    Sales_data(const string &book, const unsigned num, const double sellp, const double sallp);
    Sales_data(istream &is);
public:
    string bookNo;
    unsigned units_sold = 0;
    double sellingprice = 0.0;
    double saleprice = 0.0;
    double discount = 0.0;
};
Sales_data::Sales_data(const string &book, const unsigned num, const double sellp, const double sallp) {
    bookNo=book;
    units_sold=num;
    sellingprice=sellp;
    saleprice=sallp;
    if(sellingprice!=0)
        discount=saleprice / sellingprice;
}
Sales_data::Sales_data(istream &is) {
    is >> *this;
}
#endif //EX_7_11_7_11_H
