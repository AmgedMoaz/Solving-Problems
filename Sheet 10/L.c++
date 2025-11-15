#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main ()
{
  long long L , S1 , S2;
   cin >> L >> S1 >> S2;
  int Q;
   cin >> Q;
    
    while(Q--)
     {
       long long q;
        cin >> q;
       double long time = sqrt(2) * (L-sqrt(q)) / abs(S1 - S2);
        cout << fixed << setprecision(6) << time << endl;
     }

    return 0;
}