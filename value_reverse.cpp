#include <iostream>

using namespace std;

int main()
{
   int num, ans=0, a, b=2;
   cin >> num;
   for(a=0;a<b;a++)
   {
       if(num/10>10)
       {
           b++;
       }
       ans = 10*(ans+num%10);
       num = num/10;
   }
   cout << ans/10 << endl;
}
