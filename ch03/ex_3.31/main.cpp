#include <iostream>
using namespace std;
int main() {
    int s[10];
    for(int i=0;i<10;i++)
        s[i]=i;
   int *p=begin(s);
   while (p!=end(s)) {
       *p = 0;
        p++;
   }
   for(auto u:s)
       cout << u;
    return 0;
}