#include <iostream>

using namespace std;

int main()
{
   int num, sum=0, a, b=2;
   cin >> num;
   for(a=0;a<b;a++)
   {
       if(num/10>10)
       {
           b++;
       }
       sum = sum+num%10;
       num = num/10;
   }
   cout << sum << endl;
}
