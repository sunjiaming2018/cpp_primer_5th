#include <iostream>
using namespace std;
void rset(int &i){
    i=0;
}
int main() {
int ss=88;
cout<<"重置前ss等于："<<ss<<endl;
rset(ss);
cout<<"重置后ss等于："<<ss<<endl;
    return 0;
}