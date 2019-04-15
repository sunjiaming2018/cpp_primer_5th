#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main() {
    vector<string> s;          //vector类型是字符串
    string i;
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