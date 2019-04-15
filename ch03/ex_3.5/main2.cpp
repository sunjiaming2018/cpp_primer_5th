#include <iostream>
#include <string>
using namespace std;
int main() {
    char co = 'y';
    string i, j;
    cout << "输入第一个字符串：" << endl;
    while (cin >> i) {
        j = j + " " + i;
        cout << "是否继续输入,是请输入y,否请输入n" << endl;
        cin >> co;
        if (co == 'y')
            cout << "请输入下个字符串：" << endl;
        else
            break;
    }
    cout << "连接后的字符串为：" << j << endl;
    return 0;
}
