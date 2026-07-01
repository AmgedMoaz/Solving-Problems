#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
int T ;
cin >> T;

while (T--)
{
  int N;
  cin >> N;

int A[N];
for ( int i = 0 ; i < N ; i++)
{
    cin >> A[i];
}


for( int i = 0 ; i < N ; i++)
{
    int V = A[i];
    cout << A[i] << " ";
for ( int j = i+1 ; j < N ; j++ )
{
  V = max(V,A[j]);
  cout << V << " ";
}

}

 cout << "\n";

}

    return 0;
}