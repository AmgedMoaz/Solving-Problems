 // Distinct Numbers
#include <bits/stdc++.h>
using namespace std;

// Function to count distinct numbers in an array
int countDistinctNumbers(int arr[], int n);

int main() {
  
    int n;
    cin >> n;

     int arr[n];
      for(int i = 0 ; i < n ; i++) {
        cin >> arr[i];
      }
       int result = countDistinctNumbers(arr , n);
       cout << result << endl;
 
    return 0;
}

// Definition of the function to count distinct numbers
int countDistinctNumbers(int arr[] , int n) {
    int counter = 0;
     for(int i = 0 ; i < n ; i++) {
        bool isDistinct = true;
        for(int j = i+1 ; j < n ; j++) {
           if(arr[i] == arr[j]) {
             isDistinct = false;
             break;
           }
        }
       if(isDistinct) {
         counter++;
       }
     }
     return counter;    
}