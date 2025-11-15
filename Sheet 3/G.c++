#include <iostream>
using namespace std;
int main ()
{
int N;
cin >> N;

int A[N];

for (int i = 0 ; i < N ; i++)
 {

  cin >> A[i];

 }
bool Palindrome = true;
for (int i = 0 ; i < N/2 ; i++)
 { 
   if ( A[i] != A[N-i-1])
   {
        Palindrome = false;   
        break;

   }
}
  if (Palindrome)
{

    cout << "YES";

}
 else 
 {

    cout << "NO";

 }

    return 0;
}