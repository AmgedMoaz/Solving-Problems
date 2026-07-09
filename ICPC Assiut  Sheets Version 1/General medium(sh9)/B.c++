#include <iostream>
using namespace std;
int main ()
{
  int num;
   cin >> num;
    if (num == 0)
    {
        cout << 1 << "\n";
         return 0;
    }
    
      if (num % 4 == 0)
       {
         cout << 6 << endl;
       }
        else if (num % 4 == 1)
        {
            cout << 8 << "\n";
        }
          else if (num % 4 == 2)
           {
            cout << 4 << endl;
           }
            else if(num % 4 == 3)
            {
                cout << 2 << "\n";
            }

  return 0;  
} 