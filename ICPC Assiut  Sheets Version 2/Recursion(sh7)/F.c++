// Print Even Indices
 
#include <bits/stdc++.h>
using namespace std;
 
// Function to print the even index array items
void print(int arr[] , int size , int index);
 
int main() {
 
    int n;
    cin >> n;
 
     int arr[n];
     for(int i = 0 ; i < n ; i++) 
       cin >> arr[i];
 
        print(arr,n,0);
 
    return 0;
}
 
// Definition the print function
void print(int Array[] , int Size ,int index)
{
    if(index > Size-1)
    {
        return;                           // base case
    }
    print(Array,Size,index+2);            // recursive case
    cout << Array[index] << " ";
}