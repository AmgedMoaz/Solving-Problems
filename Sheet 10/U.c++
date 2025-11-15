#include <bits/stdc++.h>
using namespace std;
bool check(string s1 , string s2)
{
    if(s1.size() > s2.size()) return false;


    int index = 0;
    for (int i = 0 ; i < s2.size() ;i++)
    {
        if(s1[index] == s2[i]) index++;
        if(index == s1.size()) return true;
    }
    return false;
}
void solve()
{
      string S1 , S2 , S3;
       cin >> S1 >> S2 >> S3;
        if(check(S1,S2))
         {
            map<char,int> n1;
            map<char,int> n2;
             for(int i = 0 ; i < S1.size() ; i++)
             {
                n1[S1[i]]++;
             }  
                for(int i = 0 ; i < S2.size() ; i++)
                  n2[S2[i]]++;

                  for(int i = 0 ; i < S3.size() ; i++)
                  {
                   n1[S3[i]]++;
                  }  
                  map<char,int>:: iterator itr;
                   for(itr = n2.begin() ; itr != n2.end() ; ++itr)
                   {
                    char f = itr->first;
                    int s = itr->second;
                    if (n1[f] < s)
                    {
                     cout << "NO\n";
                     return;
                    }
                   }
                cout << "YES\n";
         }
         else{
            cout << "NO\n";
         }
    
}
int main ()
{
    int T;
     cin >> T;
     while(T--)
    { 
      solve();
    }
    

    return 0;
}