#include <iostream>
using namespace std;
unsigned mytimes()
{
    static int va=-1;
    va++;
    return va;
}
int main() {
    cout<<"请输入一个字符："<<endl;
    char ss;
    while (cin>>ss)
        cout<<"执行mytimes的次数为："<<mytimes()<<endl;
    return 0;
}