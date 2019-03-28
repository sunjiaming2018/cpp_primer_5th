//输入多条数据，记录每个isbn总数
//运行有缺陷
#include <iostream>
#include "Sales_item.h"
using namespace std;
int main() {
    Sales_item item1,item2;
    int i=1;
    cout << "请输入书籍数据"<<endl;
    if(cin >> item1){
        while(cin >> item2){
            if(item1.isbn()==item2.isbn()){
                i++;
            }else{
                cout << item1.isbn()<<"总有"<<i<<"条几句"<<endl;
                item1=item2;
                i=1;
            }
        }
        cout << item1.isbn()<<"总有"<<i<<"条几句"<<endl;
    } else{
        cout << "没有数据" <<endl;
        return -1;
    }

    return 0;
}