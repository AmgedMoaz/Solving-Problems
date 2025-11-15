#include <bits/stdc++.h>
using namespace std;
int main ()
{
  long long Size;
   cin >> Size;
    vector<pair<long,pair<long,long> > > N(Size);
    for (int i = 0 ; i < Size ; i++)
    {
        long long N1 , N2;
        cin >> N1 >> N2;
        N[i].first = (N1 - N2);
        N[i].second = {N1,N2};
    }
     sort(N.begin() , N.end());
     long long total = N[Size-1].second.first;
     long long sol = N[Size-1].second.first - N[Size-1].second.second;
     for(int i = Size-2 ; i >= 0 ;i--)
     {
         if(sol < N[i].second.first)
         {
            total += N[i].second.first - sol;
            sol = N[i].second.first;
            sol -= N[i].second.second;
         }
         else
         {
            sol -= N[i].second.second;
         }
     }
      cout << total;

    return 0;
}