 // Sum Digits
#include <bits/stdc++.h>
using namespace std;

int main() {

  int n , sum = 0;
  cin >> n;

   string number;
    cin >> number;

     for(char c : number) {
        sum += c - '0';
     }
       cout << sum << endl;

    return 0;
}