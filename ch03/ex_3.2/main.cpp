#include <iostream>
#include <string>
using namespace std;
int main()    //一次读取一行，遇到空白跳过，不可读取空白
{
    string i;
    cout << "请输入一个字符串" << endl;
    while (cin>>i)
        cout << i << endl;
    return 0;
}