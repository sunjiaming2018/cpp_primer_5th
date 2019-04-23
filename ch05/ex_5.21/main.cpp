#include <iostream>
#include <string>
using namespace std;
int main() {
    string va,preva;
    bool it=true;
    while (cin>>va){
        if(!isupper(va[0]))
            continue;
        if(va==preva) {
            it = false;
            cout << "出现相同字符串的是" << va << endl;
            break;
        } else{
            preva=va;
        }
    }
    if(it)
        cout<<"没有出现连续相同的字符串"<<endl;
    return 0;
}