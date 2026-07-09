// Code a program to find k largest elements in a given array of integers.
#include <iostream>
#include <algorithm>
using namespace std;
int main () {
   int arr[7] = {4 , 21 , 13 , 31 , 14 , 41 , 15};
   int k = 4;
   sort(arr , arr+7 , greater<int>());
   for(int i = 0 ; i < k ; i++)
    {
        cout << arr[i];
        if ( i != k-1)
        cout << " , ";
    }
    return 0;
}