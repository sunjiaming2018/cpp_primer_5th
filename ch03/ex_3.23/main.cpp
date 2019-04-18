#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> ine;
    int i;
    while (cin>>i){
        ine.push_back(i);
        break;
    }
    for(auto j=ine.begin();j!=ine.end();j++){
        *j=(*j)*2;
        cout << *j;
    }

    return 0;
}