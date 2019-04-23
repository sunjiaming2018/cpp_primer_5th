#include <iostream>
using namespace std;
int main() {
    double v1,v2;
    cout<<"请输入两个数："<<endl;
    cin>>v1>>v2;
    if(v2==0){
        cout<<"v2等于0不能当除数"<<endl;
        return -1;}
    else{
        cout<<"v1除以v2等于："<< v1 / v2 <<endl;
    }
    return 0;
}