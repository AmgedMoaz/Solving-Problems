 // Shift Right
#include <bits/stdc++.h>
using namespace std;

int n;

// Function to shift right the elements of the array
void shiftRight(int arr[], int a, int b);

int main() {

    int x;
    cin >> n >> x;
     
    int arr[n];
     for(int i = 0 ; i < n ; i++)
        cin >> arr[i];{
     }
       shiftRight(arr, n, x);

        for(int i = 0 ; i < n ; i++) {
            cout << arr[i] << " ";
        }

    return 0;
}

// Definition of the function to shift right the elements of the array
void shiftRight(int arr[], int n, int x) {
    x %= n;

    while (x--) {
        int last = arr[n - 1];

        for (int i = n - 1; i > 0; i--) {
            arr[i] = arr[i - 1];
        }

        arr[0] = last;
    }
}