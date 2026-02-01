#include <iostream>
using namespace std;
int main ()
{
int N,M; 
cin >> N >> M;

int A[N][M];


for (int i = 0 ; i < N ; i++)
{
    for(int j = 0 ; j < M ; j++)
    {
        
        cin >> A[i][j];
        
    }
}

int X;
cin >> X;

for (int i = 0 ; i < N ; i++)
{
  for (int j = 0 ; j < M ; j++)
  {

 if ( A[i][j] == X)
    {
        cout << "will not take number";
        return 0;
    }


  }
}

  cout << "will take number";

    return 0;
}