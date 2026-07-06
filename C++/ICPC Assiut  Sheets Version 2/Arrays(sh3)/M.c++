 // Replace MinMax
#include <bits/stdc++.h>
using namespace std;

int main() {

  int n; 
  cin >> n;

   long long arr[n];
    for(int i = 0 ; i < n ; i++) {
        cin >> arr[i];
    }
     
      int mnIdx = 0, mxIdx = 0;

       for (int i = 1; i < n; i++) {

         if (arr[i] < arr[mnIdx])
          mnIdx = i;
           if (arr[i] > arr[mxIdx])
             mxIdx = i;
             
        }

         swap(arr[mnIdx], arr[mxIdx]);

         for(int i = 0 ; i < n ; i++) {
           cout << arr[i] << " ";
         }

   
    return 0;
}