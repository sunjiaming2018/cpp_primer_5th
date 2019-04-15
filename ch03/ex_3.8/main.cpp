#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    int i=0;
    cout << "请输入一个字符串：" << endl;
    getline(cin,s);             //可以包括空格
    while (s[i]!='\0'){         //使用while语句
        s[i]='X';
        i++;}
    cout << s << endl;
    return 0;
}