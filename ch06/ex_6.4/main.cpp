#include <iostream>
using namespace std;
int fact(int val){    //编写阶乘函数
    if(val<0)
        return -1;
    int ss=1;
    for(int i=1;i<=val;i++)
        ss*=i;
    return ss;
}
int main() {
    int pp;
    cout <<"输入一个整数:"<<endl;
    cin>>pp;
    cout<<pp<<"它的阶乘是："<<fact(pp)<<endl;
    return 0;
}