#include <iostream>
using namespace std;
int main ()
{
int N;
cin >> N;
for(int i = 2 ; i<=N ; i++)
 {
   bool check = true;
     for(int j = 2 ; j<i ; j++)
      {      
      if(i % j == 0)
       {
        check = false;
         break;
       }
       }
         if(check)
          {
            cout << i << " " ;
          }
}

    return 0;
}