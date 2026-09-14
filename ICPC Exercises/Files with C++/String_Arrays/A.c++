// Vanya and Fence

#include <bits/stdc++.h>
using namespace std;

int main() {

short n , h;
cin >> n >> h;

int arr[n];
int counter = 0;
for(int i = 0 ; i < n ; i++) {
    cin >> arr[i];
    if(arr[i] <= h) {
        counter++;
    }else {
        counter += 2;
    }
}
  cout << counter << endl;

    return 0;
}