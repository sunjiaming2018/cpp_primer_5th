#include <iostream>
using namespace std;
void swap(int *a,int *b){
    int *c;
    *c=*a;
    *a=*b;
    *b=*c;
}
int main() {
    int ss,pp;
    cout<<"请输入两个数："<<endl;
    cin>>ss>>pp;
    cout<<"ss等于"<<ss<<endl;
    cout<<"pp等于"<<pp<<endl;
    swap(ss,pp);
    cout<<"ss等于"<<ss<<endl;
    cout<<"pp等于"<<pp<<endl;
    return 0;
}