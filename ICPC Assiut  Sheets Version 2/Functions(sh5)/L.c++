 // New Array
#include <bits/stdc++.h>
using namespace std;

// Function to print the elements of an array by two arrays
void printArray(int arr1[], int arr2[], int n);

int main() {
  
    int n;
    cin >> n;

     int arr1[n] , arr2[n];

      for (int i = 0; i < n; i++) {
        cin >> arr1[i];
      }
       for (int i = 0; i < n; i++) {
         cin >> arr2[i];
       }
       
        printArray(arr1, arr2, n);

    return 0;
}

// Define a function to print the elements of an array by two arrays
void printArray(int arr1[], int arr2[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr2[i] << " ";
    }
    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }
     cout << "\n";
}