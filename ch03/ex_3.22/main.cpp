#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;
int main() {
    vector<string> text;
    string ss;
    while (cin>>ss){
        text.push_back(ss);
        break;}
    for(auto it=text.begin();it!=text.end()&&!it->empty();it++){
        for(auto it1=it->begin();it1!=it->end();it1++){
            *it1=toupper(*it1);
        }
        cout << *it <<endl;
    }
    return 0;
}