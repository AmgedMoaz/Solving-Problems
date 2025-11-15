#include <iostream>
using namespace std;
int main ()
{
    int size;
    cin >> size;
    int pol = 0;
    int iss = 0;
    for (int i = 0 ; i < size ; i++)
    {
      int num;
      cin >> num;
      if (num == -1)
      {
        if (pol>0)
        {
          pol--;  
        }
        else
        {
         iss++;
        }
      }
      else
      {
       pol += num;
      }
    }
      cout << iss << endl; 

    return 0;
}