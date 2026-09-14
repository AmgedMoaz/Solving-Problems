// Twins

#include <bits/stdc++.h>
using namespace std;

int main() {

short n;
cin >> n;

int arr[n];
int totSum = 0;
for(int i = 0 ; i < n ; i++) {
    cin >> arr[i];
    totSum += arr[i];
}

sort(arr,arr+n);

int mySum = 0 , counter = 0;
for(int i = n-1 ; i >= 0 ; i--) {
    mySum += arr[i];
    counter++;
    if( mySum > (totSum-mySum) ) {
        break;
    }
}

   cout << counter << endl;

    return 0;
}