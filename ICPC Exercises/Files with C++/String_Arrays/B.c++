// In Search of an Easy Problem

#include <bits/stdc++.h>
using namespace std;

int main() {

short n; 
cin >> n;

int arr[n];
for(int i = 0 ; i < n ; i++) {
    cin >> arr[i];
    if(arr[i] == 1) {
        cout << "HARD" << endl;
        return 0;
    }
}
  cout << "EASY" << endl;

    return 0;
}