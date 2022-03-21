#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout << "請輸入兩人的年紀" << endl;
    cin >> a >> b;
    if(a>b)
    {
        cout << a << endl;
    }
    else if(b>=a)
    {
        cout << b << endl;
    }
    else
    {
        cout << "無法得知" << endl; 
    }
}
