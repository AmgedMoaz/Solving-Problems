#include <bits/stdc++.h>
using namespace std;
int main ()
{
        ios::sync_with_stdio(false); // تسريع الإدخال/الإخراج
         cin.tie(nullptr);

  int T;
   cin >> T;
    while(T--)
     {
       long long big , sum;
        cin >> big >> sum;
          long long Max = (big * (big+1))/2;
           if (sum > Max)
            {
                cout << -1 << "\n";
                continue;
            }
             vector <long long> Ans;
              for (int i = big ; i >= 1 ;i--)
               {
                 if (sum >= i)
                 {
                    sum -= i;
                    Ans.push_back(i);
                 }
                  if (sum == 0)
                   {
                    break;
                   }
               }
               cout << Ans.size();
               for (auto x : Ans) cout << " " << x;
                cout << "\n";
     }
     
    return 0;
}