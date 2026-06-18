#include <bits/stdc++.h>
using namespace std;
int main () {
   int number;
    cin >> number;
int policer = 0 , crime = 0;
    for (int i = 0; i < number; i++) {  
        int x;
        cin >> x;
         if (x >= 1)
         {
            policer += x;
         }
            else if (x == -1)
            {
                if (policer > 0)
                {
                    policer--;
                }
                else
                {
                    crime++;
                }
            }
    }
    cout << crime << endl;


    return 0;
}