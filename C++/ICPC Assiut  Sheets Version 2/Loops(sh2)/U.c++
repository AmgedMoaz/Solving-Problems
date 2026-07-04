 // Some Sums
#include <bits/stdc++.h>
using namespace std;

int main() {

  int a , b , n , sum = 0;
   cin >> n >> a >>b;

    for(int i = 1 ; i <= n ; i++) {
       
        int x = i , answer = 0;
         while(x != 0) {

           answer += (x%10);
            x /= 10;

         }
          if(answer >= a && answer <= b) {
             sum += i;
          }

    }
     cout << sum;
     
    return 0;
}