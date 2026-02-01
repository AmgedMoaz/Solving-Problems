#include <bits/stdc++.h>
using namespace std;
int main ()
{
    cin.tie(0);
    cout.sync_with_stdio(0);


   int Size , result = -1;
    cin >> Size;
     int A[Size];
     priority_queue<pair<int,int> > p;
   for (int i = 0 ; i < Size ;i++)
   {
    cin >> A[i];
    p.push({A[i],i});
   }
     for(int i = 0 ; i < Size ;i++)
     {
        while(p.size() > 0 && p.top().first >= A[i])
        {
           result = max(result, p.top().second - i);
           p.pop();
        }
     }
     cout << result;


    return 0;
} 