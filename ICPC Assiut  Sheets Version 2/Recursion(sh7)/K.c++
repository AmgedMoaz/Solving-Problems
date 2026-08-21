// Max Number

#include <bits/stdc++.h>
using namespace std;

int n , index = 0 , position = 0;

// Function to calculate the max item in array
int maxNumber(int arr[]);

int main ()
{
   
    cin >> n;

     int arr[n];
     for(int i = 0 ; i < n ; i++) cin >> arr[i];
     cout << maxNumber(arr);
    
    return 0;
}

// Definition the Max function
int maxNumber(int arr[]) {
    if(arr[position] < arr[index]) {
        position = index;
    }
    
    if(index == n-1) return arr[position];        // base case
    else {
        index++;
        return maxNumber(arr);                    // recursive case
    }
}