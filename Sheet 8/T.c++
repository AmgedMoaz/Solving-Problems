#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
  string word;
  cin >> word;
  int mySize = (word.size()/2) + 1;
  int A[mySize];
  int counter = 0;
  for (int i = 0 ; i < word.size() ; i++)
  {
    if (word[i] == '+') continue;
    A[counter] = (word[i] - '0');
    counter++;
  }
  int n = sizeof(A) / sizeof(A[0]);
  sort(A,A+n);
  for (int i = 0 ; i < mySize ;i++)
  {
    if (i != 0)
    {
        cout << "+";
    }
    cout << A[i];
  }
    return 0;
}