#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;
int main() {
    int sz=10;
    int s[sz];
    srand((unsigned)time(NULL));
    for(auto &val:s){
        val=rand()%10;
    cout << s << endl;}
    vector<int> pp(begin(s),end(s));
    for(auto i:pp)
        cout << i;
    return 0;
}