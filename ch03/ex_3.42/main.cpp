#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> val={1,2,3,4,5,6,7,8};
    auto it=val.begin();
    int j=val.size();
    int s[j];
    for(auto &i:s){
        i=*it;
        it++;}
    for(auto i:s)
        cout << i;
    return 0;
}