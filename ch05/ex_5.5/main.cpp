#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> it;
    int gra;
    char co;
    while(cin>>gra) {
        it.push_back(gra);
    }
    for(auto ss=it.begin();ss!=it.end();ss++)
        if(*ss>=90){
            cout<<"A"<<endl;
        } else if(*ss>=80){
            cout << "B" <<endl;
        }else if(*ss>=70){
            cout <<"C"<<endl;
        } else if(*ss>=60){
            cout <<"D"<<endl;
        } else if(*ss<60){
            cout <<"E"<<endl;
        }
    return 0;
}