#include <iostream>

using namespace std;

int main()
{
    int n, a, A[30];
    int max=A[0], mini=A[0], sum=0;
    float ave=0;
    for(a=0;a<30;a++)
    {
        cin >> n;
        A[a] = n;
    }
    for(a=0;a<30;a++)
    {
        if(max<A[a])
        {
            max = A[a];
        }
    }
   for(a=0;a<30;a++)
    {
        if(mini>A[a])
        {
            mini = A[a];
        }
    }
    for(a=0;a<30;a++)
    {
        sum = sum+A[a];
    }
    ave = sum/30;
    cout << "最大值為" << max << endl;
    cout << "最小值為" << mini << endl;
    cout << "平均值為" << ave << endl;
    
    return 0;
}
