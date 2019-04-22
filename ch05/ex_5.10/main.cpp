#include <iostream>
using namespace std;
int main() {
    int ait,eit,iit,oit,uit;
    char ss;
    while (cin>>ss) {
        switch (ss) {
            case 'a':
            case 'A':
                ait++;
                break;
            case 'e':
            case 'E':
                eit++;
                break;
            case 'i':
            case 'I':
                iit++;
                break;
            case 'o':
            case 'O':
                oit++;
                break;
        }
    }
    cout << "a和A的个数"<<ait<<endl;
    cout<<"e和E的个数"<<eit<<endl;
    cout<<"i和I的个数"<<iit<<endl;
    cout<<"o和O的个数"<<oit<<endl;
    cout<<"u和U的个数"<<uit<<endl;
    return 0;
}