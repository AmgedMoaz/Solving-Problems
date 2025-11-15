#include <iostream>
#include <algorithm>
using namespace std;
int Compare (int N , int Array[] )
{
    int Max = 0,Min = 0; 
    sort(Array,Array+N);
    Min = Array[0];
    Max = Array[N-1]; 
    cout << Min << " " << Max;
}
int main ()
{
    int N;
    cin >> N;
    
    int Array[N];
    for (int i = 0 ; i < N ; i++)
    {
     cin >> Array[i];
    }
 Compare(N, Array);

   return 0;
}