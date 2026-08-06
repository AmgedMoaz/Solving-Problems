 // Shift Zeros
#include <bits/stdc++.h>
using namespace std;

// Function to shift zeros right 
void shiftZeros(int Arr[] , int x);

int main() {
  
  int n;
  cin >> n;

   int arr[n];
    for(int i = 0 ; i < n ; i++) {
      cin >> arr[i];
    }

     shiftZeros(arr , n);
     for(int i = 0 ; i < n ; i++) {
       cout << arr[i] << " ";
     }
 
   return 0;
}

// Definition of the function to count distinct numbers
void shiftZeros(int arr[], int n) {
    int index = 0;

    // حط كل العناصر غير الصفرية في البداية
     for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[index] = arr[i];
            index++;
        }
    }

    // املأ باقي الـ array بأصفار
    while (index < n) {
        arr[index] = 0;
        index++;
    }
}