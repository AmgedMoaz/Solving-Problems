// Summation

#include <bits/stdc++.h>
using namespace std;

int n , index = 0;
long long Sum = 0;

// Function to calculate the sum of array numbers
long long sum(int arr[]);

int main ()
{
   
   cin >> n;

    int arr[n];
    for(int i = 0 ; i < n ; i++) cin >> arr[i];
    
     cout << sum(arr);

    return 0;
}

// Definition the sum function
long long sum(int arr[]) {
    if(index == n) return Sum;                     // base caae      

    else Sum += arr[index++];
    return sum(arr);                               // recursive casse
}