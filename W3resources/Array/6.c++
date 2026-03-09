// Code a program to find all elements in array of integers which have at-least two greater elements
#include <iostream>
#include <algorithm>
using namespace std;
int main () {
     int arr[] = {1,2,3,4,5};
     int n = 5;
     sort(arr,arr+5);
     for(int i = 0 ; i < n-2 ; i++)
     {
         cout << arr[i];
        if (arr[i] != arr[n-3])
        {
             cout << " , ";
        }
     }
 
    return 0;
}