#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int i;
    unsigned long long int t = 1;
    for(i=1;i<=200;i++)
    {
        t = t*i;
    }
    cout << t;

    return 0;
}
