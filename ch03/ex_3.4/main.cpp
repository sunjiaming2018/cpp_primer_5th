#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s1,s2;
    cout << "请输入两个字符串" << endl;
    cin >> s1 >> s2;    //两个字符串使用回车分开
    if(s1==s2)
        cout << "两个字符串相等" << endl;
    else if(s1>s2)
        cout << "两个字符串中比较大的是："<<s1<<endl;
    else if(s1<s2)
        cout << "两个字符串中比较大的是:"<<s2<<endl;
    return 0;
}