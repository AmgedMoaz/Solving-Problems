#include <iostream>
using namespace std;
int A[100000];
int N;
bool getPalindrome(int Number)
{
    if (Number == N) return 1;
    return (A[Number] == A[N - Number - 1]) && getPalindrome(Number+1);
}
int main ()
{
  cin >> N;
  for (int i = 0 ; i < N ; i++)
  {
    cin >> A[i];
  }
  if(getPalindrome(0)) cout << "YES";
  else cout << "NO";

    return 0;
}