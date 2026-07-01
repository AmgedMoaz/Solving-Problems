  // Two numbers
#include <bits/stdc++.h>
using namespace std;
int main() {
   
 int A , B;
 cin >> A >> B;
 double operation =(double)A/B;
 cout << "floor " << A << " / " << B << " = " << floor(operation) << endl;
 cout << "ceil " << A << " / " << B << " = " << ceil(operation) << endl;
 cout << "round " << A << " / " << B << " = " << round(operation) << endl;
   
    return 0;
}