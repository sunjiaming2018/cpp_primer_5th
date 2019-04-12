#include <iostream>
#include <string>
using namespace std;
int main()    //一次读取一行，可以读取空白
{
    string i;
    cout << "请输入一个字符串" << endl;
    while (getline(cin, i))
        cout << i << endl;
    return 0;
}

