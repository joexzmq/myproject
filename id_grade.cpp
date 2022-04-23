#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "人數" << endl;
    cin >> b;
    int G[b], A[b];
    int id, gra, id_max, id_mini;
    float max=0, mini=0, sum=0, ave;
    for(a=1;a<b+1;a++)
    {
        cout << "學號" << a << endl;
        cin >> id;
        cout << "成績" << a << endl;
        cin >> gra;
        A[a] = id;
        G[a] = gra;
        sum = sum+G[a];
        if(G[a]>G[a-1])
        {
            max = G[a];
            id_max = A[a];
        }
         else
        {
            max = G[a-1];
            id_max = A[a-1];
        }
        if(G[a]<G[a-1])
        {
            mini = G[a];
            id_mini = A[a];
        }
        else
        {
            mini = G[a-1];
            id_mini = A[a-1];
        }
    }
        ave = sum/b;
        cout << "最高分 " << max << " " << "學號 " << id_max << endl
             << "最低分 " << mini << " " << "學號 " << id_mini << endl
             << "總分 " << sum << endl << "平均 " << ave << endl;
}
