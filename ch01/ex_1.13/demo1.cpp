//使用for循环,将50~100相加
#include <iostream>
using namespace std;
int main() {
    int sum=0;
    for(int val=50;val<=100;val++)
        sum+=val;
    cout << sum <<endl;
    return 0;
}