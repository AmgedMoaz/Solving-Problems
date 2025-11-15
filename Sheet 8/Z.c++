#include <iostream>
using namespace std;
int main ()
{
  int size;
  string word;
  string result = "";
  cin >> size >> word;
  int i = 0;
    while (size)
    {
       if (size % 2 == 0) 
        {
            result = word[i] + result;
        }
       else 
       {
        result = result + word[i];
       }
     i++;  size--;
    }
        cout << result;

    return 0;
}