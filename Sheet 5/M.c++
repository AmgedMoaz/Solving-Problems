#include <iostream>
#include <set>
using namespace std;
void getDistinct(int N, int A[]) {
    set<int> s;
    for (int i = 0; i < N; i++) {
        s.insert(A[i]);
    }
    cout << s.size();
}

int main ()
{
   int N;
   cin >> N;
    
   int A[N];
   for(int i = 0 ; i < N ; i++)
   {
     cin >> A[i];
   }

     getDistinct(N,A);

    return 0;
}