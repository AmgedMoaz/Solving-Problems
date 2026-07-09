 //  Lucky Array
#include <bits/stdc++.h>
using namespace std;

int main() {

  int n , counter = 0;
  cin >> n;

   long long arr[n];
    for(int i = 0 ; i < n ; i++) {
        cin >> arr[i];
     }

      long long Min = *min_element(arr,arr+n);
       for(int i = 0 ; i < n ; i++) {
         if(Min == arr[i]) {
             counter++;
         }else 
           continue;
       }

        (counter % 2 != 0)? cout << "Lucky" : cout << "Unlucky";
     
    return 0;
}