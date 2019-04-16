#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;
int main() {
    vector <int> ss;
    int j;
    while (cin>>j) {
        ss.push_back(j);
    }
    for(int i=0;i<ss.size()-1;i++)
        cout << ss[i]+ss[i+1] << endl;//输出相邻两数和
    int p,u=0;
    p=ss.size()-1-u;
    while (u<p){
        cout << ss[u]+ss[p] << endl;//输出对称两数的和
        u++;
    }
    return 0;
}