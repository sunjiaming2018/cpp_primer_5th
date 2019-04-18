#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main() {
    int s[10],q[10],l;
    srand((unsigned)time(NULL));
    for(int i=0;i<10;i++) {
        s[i] = rand() % 10;
    }
    for (int i = 0; i < 10; ++i) {
        if(cin>>l)
            q[i]=l;
        break;
    }
    int *p=begin(s),*u=begin(q);
    while(p != end(s) && u != end(q))
      if(*p!=*u){
          cout <<"两数不等" << endl;
          break;}
      else{
          p++;
          u++;
    }
    return 0;
}