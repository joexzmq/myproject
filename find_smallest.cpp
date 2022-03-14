#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(a>b)
    {
       a = b; 
    }
    else if(a>c)
    {
        a = c;
    }
    else if(a>d)
    {
        a = d;
    }
    else
    {
        a = a;
    }
    cout << a << endl;
}
