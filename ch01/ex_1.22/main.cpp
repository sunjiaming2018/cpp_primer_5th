//多条相同isbn的数据相加
#include <iostream>
#include "Sales_item.h"
using namespace std;
int main() {
    Sales_item item1,item2;
    cout << "请输入几个Sales_item数据"<<endl;
    if(cin>>item1){
        while(cin>>item2){
            if(item1.isbn()==item2.isbn()){//isbn相同的情况
                item1+=item2;
            }
            else{
                cout << "isbn不同"<<endl;
                return -1;
            }
            cout << item1 <<endl;
        }
    } else{
        cout << "没有数据" <<endl;
        return -1;
    }
    return 0;
}