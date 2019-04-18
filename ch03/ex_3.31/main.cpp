#include <iostream>
using namespace std;
int main() {
    int s[10];
    for(int i=0;i<10;i++)
        s[i]=i;
    for(auto &j:s)
        cout << j;
    return 0;
}