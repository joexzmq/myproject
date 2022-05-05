#include<iostream>

using namespace std;

int main()
{
    void sort(int *score);
    int score[10];
    for (int i = 0; i < 10; i++)
    {
        cin>>score[i];
    }
    sort(score);
    for (int j = 0; j < 10; j++)
    {
        cout<<score[j]<<" ";
    }
    cout<<endl;
}
void sort(int *score)
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = i+1; j < 10; j++)
        {
            if(score[i]<score[j])
            {
                swap(score[i],score[j]);
            }
        }
    }
}
