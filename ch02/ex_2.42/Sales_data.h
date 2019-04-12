#ifndef EX_2_42_SALES_DATA_H
#define EX_2_42_SALES_DATA_H
#include <iostream>
#include <string>
using namespace std;

class Sales_data{
    friend istream& operator >> (istream&,Sales_data&);
    friend ostream& operator << (ostream&,const Sales_data&);
    friend bool operator < (const Sales_data&, const Sales_data&);
    friend bool operator == (const Sales_data&, const Sales_data&);

public:
    Sales_data() = default;
    Sales_data(const string &book): bookNo(book){}
    Sales_data(istream &is) { is >> *this;}
public:
    Sales_data& operator += (const Sales_data&);
    string isbn() const {return bookNo;}

private:
    string bookNo;
    unsigned units_sold = 0;
    double sellingprie = 0.0;
    double saleprice = 0.0;
    double discout = 0.0;
};
inline bool compareIsbn(const Sales_data &lhs,const Sales_data &rhs){return lhs.isbn()==rhs.isbn();}
Sales_data operator + (const Sales_data&,const Sales_data&);
inline bool operator == (const Sales_data &lhs, const Sales_data &rhs){
    return lhs.units_sold == rhs.units_sold && lhs.sellingprie == rhs.sellingprie &&
           lhs.saleprice == rhs.saleprice &&
           lhs.isbn() == rhs.isbn();
}
inline bool operator != (const Sales_data &lhs,const Sales_data &rhs)
{
    return !(lhs == rhs);
}
Sales_data& Sales_data::operator+=(const Sales_data& rhs)
{
    units_sold += rhs.units_sold;
    saleprice=(rhs.saleprice*rhs.units_sold+saleprice*units_sold) / (rhs.units_sold + units_sold);
    if(sellingprie !=0)
        discout = saleprice / sellingprie;
    return *this;
}
Sales_data operator + (const Sales_data& lhs,const Sales_data& rhs)
{
    Sales_data ret(lhs);
    ret += rhs;
    return ret;
}
ostream& operator << (ostream& out,const Sales_data& s)
{
    out << s.isbn() << "" <<s.saleprice << "" << s.sellingprie << ""<< s.saleprice << "" <<s.discout;
    return out;
}
#endif //EX_2_42_SALES_DATA_H
