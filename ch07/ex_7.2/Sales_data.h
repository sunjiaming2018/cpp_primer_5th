//
// Created by sunjiaming on 19-5-13.
//

#ifndef EX_7_2_SALES_DATA_H
#define EX_7_2_SALES_DATA_H


class Sales_data {
private:
    string bookNO;
    unsigned  units_sold=0;
    double sellingprice=0.0;
    double saleprice=0.0;
    double discount=0.0;
public:
    sting isbn() const { return bppkNo;}
    Sales_data& combine(const Sales_data &rhs){
        units_sold += rhs.units_sold;
        saleprice =(rhs.saleprice*rhs.units_sold+saleprice*units_sold)
                if(sellingprice !=0)
                    discount = saleprice / sellingprice;
        return *this;
    }
};


#endif //EX_7_2_SALES_DATA_H
