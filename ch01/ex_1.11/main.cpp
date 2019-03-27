//输入两个数,打印之间所有整数
#include <iostream>
using namespace std;
int main() {
    int v1,v2;
    cin >> v1 >>v2;
    if (v1>=v2)
        while(v2<=v1){
            cout << v1 <<endl;
            v1--;
        }
    else
        while(v1<=v2){
            cout << v1 <<endl;
            v1++;
        }
    return 0;
}