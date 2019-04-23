#include <iostream>
#include <string>
using namespace std;
int main() {
    do{
        string v1,v2;
        cout <<"请输入两个对象："<<endl;
        cin >> v1 >>v2;
        if(v1.size()>v2.size())
            cout << v1<<"大于"<<v2<<endl;
        else if(v1.size()<v2.size())
            cout << v1<<"小于"<<v2<<endl;
        else
            cout << v1<<"等于"<<v2<<endl;
    }
    while (cin);
    return 0;
}