//读取两个isbn相同的Sales_item对象,并相加
#include <iostream>
#include "Sales_item.h"
using namespace std;
int main() {
    Sales_item item1,item2;
    cout << "输入两个isbn相同的对象" << endl;
    cin >> item1 >> item2;
    if(item1.isbn()==item2.isbn()){
        cout << item1+item2 <<endl;
        return 0;
    }
    else{
        cout << "两个数isbn不相同" <<endl;
        return -1;
    }
}