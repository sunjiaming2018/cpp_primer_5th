#include <iostream>
#include <Sales_data.h>
using namespace std;
int main() {
Sales_data total(cin);
if(cin){
    Sales_data trans(cin);
    do{
        if(total.isbn()==trans.isbn())
            total.conbine(trans);
        else{
            print(cout,total);
            total=trans;
        }
    }while (read(cout,trans));
    print(cout,total)<<endl;
} else{
    cerr<<"no data"<<endl;
}
    return 0;
}