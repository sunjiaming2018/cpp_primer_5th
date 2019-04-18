#include <iostream>
using namespace std;
int main() {
   int a[3][4]={
           {1,1,1,1},
           {2,2,2,2},
           {3,3,3,3}
   };
   for(int (&i)[4]:a) {
       for (int &j:i)
           cout << j;
       cout<<endl;
   }
   for(int i=0;i<3;i++){
       for(int j=0;j<4;j++)
           cout << a[i][j] ;
       cout <<endl;
       }
    return 0;
}