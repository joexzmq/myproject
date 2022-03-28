#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int a = 0, b = 0, c = 0;
    int i, num;
    for(i=0;i<10;i++)
    {
        cin >> num;
        if(num>0)
        {
            a++;
        }
        else if(num==0)
        {
            b++;
        }
        else
        {
            c++;
        }
    }
    cout << "正整數有" << a << "個" << endl
         << "0有" << b << "個" << endl
         << "負整數有" << c << "個" << endl;
    
    return 0;
}
