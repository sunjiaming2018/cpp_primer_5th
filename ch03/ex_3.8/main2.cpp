#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    int i=0;
    cout << "请输入一个字符串：" << endl;
    getline(cin,s);                    //可以包括空格
    for(;i<s.size();i++){              //使用for语句
        s[i]='X';}
    cout << s << endl;
    return 0;
}

