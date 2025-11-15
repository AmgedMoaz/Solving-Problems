#include <iostream>
using namespace std;
int main ()
{
   string S;
    cin >> S;
    int Size = S.size();
    int A = Size-1;
    bool B = 0;
    for (int i = 0 ; i < Size ; i++)
    {
        if (S[i] != S[A])
        {
            B = 1;
        }
        A--;
    }
    if (B == 1)
    {
     cout << Size << endl;
     return 0;
    }
     long long C[10000];
       for(int i = 0 ; i < Size ; i++)
        {
            C[S[i]]++;
        }
         long long res = 0;
         for(int i = 'a' ; i <= 'z' ; i++)
         {
            if (C[i] > 0) res++;
         }
         if (res==1)  cout << 0;
         else 
         cout << Size-1 << "\n";

    return 0;
}