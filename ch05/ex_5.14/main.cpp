#include <iostream>
#include <string>
using namespace std;
int main() {
    string str,prestr="",maxstr;
    int i=1,max=0;
    while (cin>>str){
        if(str==prestr) {
            i++;
            if (i > max) {
                max = i;
                maxstr = str;
            }
        } else{
            i=1;
        }
        prestr=str;
    }
    if(max>1)
        cout <<"出现次数最多的是："<<maxstr<<"次数是："<<max<<endl;
    else
        cout<<"没有重复字符串"<<endl;
    return 0;
}