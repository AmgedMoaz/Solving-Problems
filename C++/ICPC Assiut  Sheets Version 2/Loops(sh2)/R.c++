 // Sequence of Numbers and Sum
#include <bits/stdc++.h>
using namespace std;

int main() {

  int a , b , sum = 0;
  int Max , Min;
   
   while(1) {

    cin >> a >> b;
     if(a <= 0 || b <= 0) {
       return 0;
     }
      Min = min(a,b);
       Max = max(a,b);
        for(int i = Min ; i <= Max ; i++) {
            
         cout << i << " ";
          sum += i;

        }
         cout << "sum =" << sum << endl;
          sum = 0;
   }

    return 0;
}