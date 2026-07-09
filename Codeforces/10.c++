#include <bits/stdc++.h>
using namespace std;
int main () {
  int number;
   cin >> number;
 string arr[number];
 int counter = 1;
 for (int i = 0; i < number; i++) {
    cin >> arr[i];
    if (i == 0) continue;
    if (arr[i] != arr[i-1]) {
        counter++;
    }
 }
    cout << counter << endl;
    return 0;
}