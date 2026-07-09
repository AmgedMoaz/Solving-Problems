 // Range sum query
#include <bits/stdc++.h>
using namespace std;
int main () {

  int n , q;
   cin >> n >> q;
    
    int arr[n];
     long long prefix[n];
      for(int i = 0 ; i < n ; i++) {

         cin >> arr[i];
          if(i == 0) {
            prefix[i] = arr[i];
          }else
            prefix[i] = prefix[i-1] + arr[i];

       }
     
         int l , r;
         while(q--) {

            cin >> l >> r;
             l-- , r--;
              if(l == 0) 
                cout << prefix[r] << endl;
              else 
                  cout << prefix[r] - prefix[l-1] << endl;
         }
        
     return 0;
    }