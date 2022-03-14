#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cin >> x;
    if(x<0)
    {
        y = 1;
    }
    else if(x>0)
    {
        y = 3;
    }
    else if(x==0)
    {
        y = 5;
        cout << x << endl;
    }
    else
    {
        cout << "wrong" << endl;
    }
    cout << y << endl;
}
