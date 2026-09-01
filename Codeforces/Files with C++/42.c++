// Long Long
// Write a code to solve problem by using two pointers

#define ll long long

#include <bits/stdc++.h>
using namespace std;

// Declaration of solve method
void solve();

int main() {

 int t;
 cin >> t;

 while(t--) {
    solve();
 }

    return 0;
}

// Implementation of the solve method
void solve() {
    int n;
    cin >> n;

    ll arr[n];
    ll sum = 0;
    int operation = 0;
    bool isNegative = false;
    for(int i = 0 ; i < n ; i++)
    { 
        cin >> arr[i];
        sum += abs(arr[i]);
        if(arr[i] < 0) {
            if(! isNegative) {
                operation++;
                isNegative = true;
            }
        }else if(arr[i] > 0){
            isNegative = false;
        }
    }
    cout << sum << " " << operation << endl;
}