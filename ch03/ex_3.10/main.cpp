#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main() {
    string s;
    cout << "请输入一个字符串：" << endl;
    getline(cin,s);
    for(auto &i:s){
        if(!ispunct(i))               //判断是否是标点符号
            cout << i ;
    }
    return 0;
}