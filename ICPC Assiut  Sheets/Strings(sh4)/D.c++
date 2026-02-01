#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
   string A , B;
  cin >> A >> B;
  int S1 = A.size();
  int S2 = B.size();
  cout << S1 << " " << S2 << endl;
  cout << A << B << "\n";
  
  swap(A[0],B[0]);
  cout << A << " " << B << endl; 
  
    return 0;
}