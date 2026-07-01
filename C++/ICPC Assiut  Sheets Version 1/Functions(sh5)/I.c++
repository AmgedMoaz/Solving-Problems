#include <iostream>
#include <algorithm>
using namespace std;
int n , Matrix[500][500];
void Replace(int n1, int n2)
{
for (int i = 0; i < n; i++)
{
    swap(Matrix[n1][i],Matrix[n2][i]);
 
}
for (int i = 0; i < n; i++)
{
    swap(Matrix[i][n1],Matrix[i][n2]);
 
}
}
int main ()
{
int r , c;
cin >> n >> r >> c;
for (int i = 0; i < n; i++)
{
  for(int j = 0; j < n; j++)
  {
    cin >> Matrix[i][j];
  }
}
r--;
c--;
Replace(r,c);
for(int i = 0 ; i < n ; i++)
{
    for (int j = 0 ; j < n ; j++)
    {
        cout << Matrix[i][j] << " ";
    }
    cout << "\n";
}
    return 0;
}