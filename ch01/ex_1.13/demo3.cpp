// 输入两个数,使用for循环,将两数之间所有整数打印出来
#include <iostream>
using namespace std;
int main(){
    int v1,v2,v3;
    cin >> v1 >> v2;
    if(v1<=v2)
        for(;v1<=v2;v1++)
            cout << v1 << endl;
    else
        for(;v1>=v2;v1--)
            cout << v1 << endl;
    return 0;
}
