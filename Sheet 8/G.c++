#include <iostream>
#include <string>
using namespace std;
int main ()
{
   int size , counter = 1 ;
   cin >> size;
   string temp;
   for (int i = 0 ; i < size ; i++)
   {
    string value;
    cin >> value;
    if (i == 0)
    {
        temp = value;
        continue;
    }
    if (temp[1] == value[0])
    {
       counter++;
    }
    temp = value;
   }

     cout << counter << endl;  

    return 0;
}