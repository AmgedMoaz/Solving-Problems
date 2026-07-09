#include <bits/stdc++.h>
using namespace std;
int main () {
  int n;
   cin >> n;

   int arr[105];
    for (int i = 1; i <= n; i++) 
      cin >> arr[i];

       int m;
        cin >> m;

         while(m--){
            int x , y;
             cin >> x >> y;

              int left = y-1;
              int right = arr[x] - y;
              
               if (x > 1) {
                  arr[x-1] += left;
               }

                if (x < n) {
                  arr[x+1] += right;
                }

                 arr[x] = 0;
               }
                  for (int i = 1 ; i <= n ;i++)
                    cout << arr[i] << " " << endl;
                  
    return 0;
}