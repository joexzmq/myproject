#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
    int i;
    float v, t=0;
    for(i=0;i<10;i++)
    {
        cin >> v;
        t = t+v;
    }
    cout << t/10 << endl;
}
