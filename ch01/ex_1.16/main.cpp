//输入一堆数,输出其和
#include <iostream>
using namespace std;
int main()
{
    int sum = 0, value = 0;
    cout << "输入一堆数字,以字母结尾,回车可结束输入"<<endl;
    while (cin >> value)
    {
        sum += value;
    }
    cout << sum << std::endl;
    return 0;
}