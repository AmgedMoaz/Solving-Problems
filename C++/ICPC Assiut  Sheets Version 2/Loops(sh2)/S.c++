 // Sum of Consecutive Odd Numbers
#include <bits/stdc++.h>
using namespace std;

int main() {

    int t , x , y , sum_of_odd = 0;
     cin >> t;
    
    while(t--) {

        sum_of_odd = 0;

      cin >> x >> y;
        int Min = min(x,y);
          int Max = max(x,y);
    
           for(int i = Min+1 ; i < Max ; i++) {
    
              if(i % 2 == 0) {
                continue;
              }else
              sum_of_odd += i;
    
          }
           cout << sum_of_odd << endl;

    }

    return 0;
}