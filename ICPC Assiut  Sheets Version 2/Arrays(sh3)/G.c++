 //  Palindrome Array
#include <bits/stdc++.h>
using namespace std;

int main() {

  int n , x;
  cin >> n;

   long long arr[n] ;
    for(int i = 0 ; i < n ; i++) {
      cin >> arr[i];
    }

      bool check = true;

       int i = 0;
        while(i <= (n/2)) {
          
           if(arr[i] == arr[n-1-i]) {
             i++;
              continue;
           }else {
               check = false;
                break;
           }
        }  

          (check == 1)? cout << "YES" : cout << "NO";
          
    return 0;
}