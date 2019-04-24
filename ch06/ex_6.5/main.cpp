#include <iostream>
using namespace std;
double abs1(double val)
{
    if(val<0)
        val=-val;
    return val;
}
int main() {
    int pp;
    cout<<"请输入一个数："<<endl;
    cin>>pp;
    cout <<pp<<"的绝对值是:"<<abs1(pp)<<endl;
    return 0;
}