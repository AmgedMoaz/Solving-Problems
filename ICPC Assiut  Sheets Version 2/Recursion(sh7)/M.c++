// Suffix Sum

#include <bits/stdc++.h>
using namespace std;

int n , m , index;
long long Sum = 0;

// Function to calculate the suffix sum
long long sum(int arr[]);

int main ()
{
   
cin >> n >> m;

index = n-1;

 int arr[n];
 for(int i = 0 ; i < n ; i++) cin >> arr[i];

  cout << sum(arr);

    return 0;
}

// Definition the sum function
long long sum(int arr[]) {
    if(index == n-m-1)
        return Sum;                  // base case

    Sum += arr[index--];
    return sum(arr);                 // recursive case
}