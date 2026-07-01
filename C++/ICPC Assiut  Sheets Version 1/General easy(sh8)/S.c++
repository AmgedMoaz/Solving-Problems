#include <iostream>
using namespace std;
int main ()
{
  int size , range , res = 0;
   cin >> size >> range;
   string myrange = "0123456789";
   
   for (int i = 1 ; i <= size ; i++)
   { 
      int count = 0;
      string num; 
      cin >> num;
     for (int j = 0 ; j <= range ; j++)
     {
      if (num.find(myrange.substr(j,1)) != string ::npos)
      {
        count++;
      }
     }
   if (count == (range + 1))
    {
        res++;
    }
   }
     cout << res;

    return 0;
}