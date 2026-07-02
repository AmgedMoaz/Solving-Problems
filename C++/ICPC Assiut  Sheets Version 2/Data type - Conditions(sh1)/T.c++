  // Sort Numbers
#include <bits/stdc++.h>
using namespace std;
int main() {

 long long num1 , num2 , num3 ;
 cin >> num1 >> num2 >> num3 ;

  long long arr[3] = {num1 , num2 , num3} ;
  sort(arr , arr + 3) ;
  cout << arr[0] << "\n" << arr[1] << "\n" << arr[2] << endl;
  cout << endl <<num1 << "\n" << num2 << "\n" << num3 << endl;

    return 0;
}