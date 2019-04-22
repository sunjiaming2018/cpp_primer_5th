#include <iostream>
#include <string>
using namespace std;
int main() {
    char it;
    int i=0;
    while (cin>>it)
        if(it=='a')
            i++;
        if(it=='e')
            i++;
        if(it=='i')
            i++;
        if(it=='o')
            i++;
        if(it=='u')
            i++;
    cout <<"其中元音字母有"<<i<<"个"<<endl;
    return 0;
}