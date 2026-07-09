 // Binary Search
#include <bits/stdc++.h>
using namespace std;
int main () {

  int n , q;
   cin >> n >> q;
    
    int arr[n];
     for(int i = 0 ; i < n ; i++) {
        cin >> arr[i];
     }

     sort(arr,arr+n);

        int x;
         while(q--) {
       
           cin >> x;
            (binary_search(arr,arr+n,x))? cout << "found" : cout << "not found" ;
              cout << endl;
      }

     return 0;
    }