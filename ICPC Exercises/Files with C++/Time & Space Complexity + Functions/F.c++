// Gravity Flip

#include <bits/stdc++.h>
using namespace std;

void solve(int arr[] , int number);

int main() {

int n;  cin >> n;
int arr[n];
for(int i = 0 ; i < n ; i++) 
    cin >> arr[i];

solve(arr , n);

    return 0;
}
void solve(int arr[] , int n) {
    int freq[101] = {0};
    for(int i = 0 ; i < n ; i++) {
        freq[arr[i]]++;
    }

    for(int i = 1 ; i <= 100 ; i++) {
        while(freq[i] > 0) {
            cout << i << " ";
            freq[i]--;
        }
    }
}