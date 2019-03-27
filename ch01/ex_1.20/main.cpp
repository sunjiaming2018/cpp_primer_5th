//使用他人定义的类来创建\使用对象
//使用sales_item.h头文件来读取一组书籍销售记录,并打印标准输出
#include <iostream>
#include "Sales_item.h"
using namespace std;
int main() {
    Sales_item book;
    std::cout << "输入销售记录" << std::endl;
    while(cin >> book){
        cout << book <<endl;
    }
    return 0;
}