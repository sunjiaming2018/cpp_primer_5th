#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char a[]="aaaaa";
    char b[]="bbbbbbbb";
    char c[strlen(a)+strlen(b)-1];
    strcpy(c,a);
    strcat(c,b);
    cout << a <<endl;
    cout << b <<endl;
    cout << c <<endl;
    return 0;
}