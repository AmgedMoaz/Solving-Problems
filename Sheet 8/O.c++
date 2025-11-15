#include <iostream>
using namespace std;
int main ()
{
   long long times , packs;
   cin >> times >> packs;
   int counter = 0;
   while(times--)
   {
     char ob;
     long long load;
     cin >> ob >> load;
     if (ob == '-')
     {
         if ( (packs - load) >= 0)  packs -= load;
         else
         counter++;
     }
     else if (ob == '+')
     {
        packs += load;
     }
   }
     cout << packs << " " << counter;

   return 0;
}