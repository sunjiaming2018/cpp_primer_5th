#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> it={1,2,3,4,5,6,7,8};
    for(auto &ss:it)
        ss=(ss%2!=0)?ss*2:ss;
    for(auto pp=it.begin();pp!=it.end();pp++)
        cout << *pp;
    return 0;
}