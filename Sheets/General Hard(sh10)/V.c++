#include <iostream>
using namespace std;
int main ()
{
   int Size , distinct;
    cin >> Size >> distinct;
     
      for (int i = 0 ; i < Size ; i++)
      { 
           cout << (char)('a' + (i%distinct));
      }

    return 0;
} 