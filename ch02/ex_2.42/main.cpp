#include <iostream>
#include "Sales_data.h"
int main() {
    Sales_data book;
    cout << "请输入销售记录："<< endl;
    while(cin>>book){
        cout << "ISBN、售出本数、原始价格、实售价格、折扣为"<< book << endl;
    }
    Sales_data t1,t2;
    cout << "请输入两条ISBN相同的销售记录：" << endl;
    cin >> t1 >> t2;
    if(compareIsbn(t1,t2))
        cout <<"ISBN、销售本数、原始价格、实售价格、折扣为" << t1+t2 << endl;
    else
        cout<<"两条销售记录的ISBN不同"<< endl;
    Sales_data t3,t_sum;
    cout << "请输入几个ISBN相同的销售记录：" << endl;
    if(cin >> t_sum){
        while (cin >> t3)
            if(compareIsbn(t3,t_sum))
                t_sum+=t3;
            else{
                cout << "当前书籍ISBN不同" << endl;
                break;
            }
        cout << "有效汇总信息：ISBN、售出本数、原始价格、实售价格、折扣为" << t_sum <<endl;
    } else{
        cout << "没有数据" << endl;
        return -1;
    }
    int num=1;
    Sales_data t4,t5;
    cout << "请输入若干条数据" << endl;
    if(cin >> t4){
        while(cin >> t5)
            if(compareIsbn(t4,t5))
                num++;
            else{
                cout << t4.isbn() << "共有" << num << "条销售记录" << endl;
                t3=t4;
                num=1;
            }
        cout << t3.isbn() << "共有" << num << "销售记录" << endl;
    }else{
        cout << "没有数据" << endl;
        return -1;
    }
    return 0;
}