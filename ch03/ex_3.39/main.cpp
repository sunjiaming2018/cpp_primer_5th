#include <iostream>
#include <cstring>
using namespace std;
int main() {
     char a[100],b[100];
     cout << "输入两个字符串：" << endl;
     cin >> a >> b;
     auto result=strcmp(a,b);
     switch(result){
         case 1:
             cout << "a>b";
             break;
         case 0:
             cout << "a=b";
             break;
         case -1:
             cout << "a<b";
             break;
     }

    return 0;
}