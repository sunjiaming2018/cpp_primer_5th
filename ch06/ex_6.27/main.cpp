#include <iostream>
using namespace std;
int isum(initializer_list<int> val){
    int iisum=0;
    for(auto ss : val)
        iisum+=ss;
    return iisum;
}
int main() {
    cout<<"1,2,3的和为："<<isum({1,2,3})<<endl;
    return 0;
}