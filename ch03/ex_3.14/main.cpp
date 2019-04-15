#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> s;          //vector类型是整型
    int i;
    char co='y';
    while (cin>>i){
        s.push_back(i);
        cout <<"是否继续输入(y or n)" <<endl;
        cin >> co;
        if(co!='y')
            break;
    }
    for(auto &j:s)
        cout << j << endl;
    return 0;
}