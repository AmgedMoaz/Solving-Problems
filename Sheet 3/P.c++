#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main ()
{
int N;
cin >> N;

int Answer = INT_MAX;

int A[N];
for (int i = 0 ; i < N ; i++)
{
  cin >> A[i];
}
for (int i = 0 ; i < N ; i++)
{
    int counter=0;
    while (A[i]%2==0)
{
counter++;
A[i]/=2;
}
Answer = min(Answer,counter);

}
cout << Answer;

    return 0;
}