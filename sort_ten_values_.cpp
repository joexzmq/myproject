#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int score[10];
    for (int i = 0; i < 10; i++)
    {
        cin>>score[i];
    }
    sort(score,score+10,greater<int>());
    for (int j = 0; j < 10; j++)
    {
        cout<<score[j]<<" ";
    }
    cout<<endl;
}
