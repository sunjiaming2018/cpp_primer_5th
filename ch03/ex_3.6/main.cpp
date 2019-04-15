#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    cout << "请输入一个字符串：" << endl;
    cin >> s;
    for (auto &i : s)          //i必须为引用类型，使用auto判断i中类型
        i = 'X';
    cout << s <<endl;
    return 0;
}