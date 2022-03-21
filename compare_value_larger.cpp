#include <iostream>

using namespace std;

int main()
{
    double a,b;
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
        cout << "無法比較" << endl; 
    }
}
