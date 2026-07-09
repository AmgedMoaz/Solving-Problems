#include <iostream>
using namespace std;
int main ()
{

int N;
cin >> N;

char Digit[N];

for ( int i = 0 ; i < N ; i++)
{
   cin >> Digit[i];
}

int sum = 0;

for ( int i = 0 ; i < N ; i++)
{

  sum += (Digit[i]-'0');

}

   cout << sum << "\n";

    return 0;
}