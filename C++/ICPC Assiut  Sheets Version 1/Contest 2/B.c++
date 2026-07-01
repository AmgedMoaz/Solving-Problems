#include <iostream>
using namespace std;
int main ()
{
int N;
cin >> N;

for (int i = 0 ; i<N ; i++)
{
  for(int j = 0 ; j <N ; j++)
  {
   if (i==N/2 && j==N/2)
      {
         cout << "X";
      }

  else if (i==j)
      {
        cout <<"\\";
      }

  else if (j!=N/2 && i==(N-1)-j)
      {
        cout << "/";
      }

  else 
      {
        cout << "*";
      }  
    }
cout << "\n";
}

    return 0;
}