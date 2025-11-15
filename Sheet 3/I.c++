#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main ()
{
    int T;
    cin >> T;
    for (int i = 0 ; i < T ; i++)
    {
        int N;
        cin >> N;
        int A[N];

for (int j = 0 ; j < N ; j++)
 {
    cin >> A[j];
 }
int Answer = INT_MAX;

for ( int j = 0 ; j < N ; j++)
{
 for(int k = j+1 ; k < N ; k++)
{
    Answer = min(Answer,A[j]+A[k]+k-j);
}

}
cout << Answer << endl;
    }

    return 0;
}