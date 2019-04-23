#include <iostream>
#include <stdexcept>
using namespace std;
int main() {
    cout<<"请输入两个数："<<endl;
    int val1,val2;
    while (cin>>val1>>val2){
        try{
            if(val2==0){
                throw runtime_error("除数不能为0");
            }
            cout<<"val1除以val2等于"<<val1/val2<<endl;
            return 0;
        }catch(runtime_error err) {
            cout<<err.what()<<endl;
            cout<<"需要继续吗(y or n)"<<endl;
            char co;
            cin>>co;
            if(co!='y')
                break;
        }
    }
    return 0;
}