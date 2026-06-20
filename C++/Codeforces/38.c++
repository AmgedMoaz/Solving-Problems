#include <bits/stdc++.h>
using namespace std;

int main() {
  long long n, k; 
  cin >> n >> k;

  long long sum = (n+1)/2;;
  if(k <= sum) {
    cout << 2*k - 1;
  }else{
    cout << 2*(k-sum);
  }

   return 0;
}