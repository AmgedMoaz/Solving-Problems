// Code a program to find the second smallest elements in a given array of integers
#include <iostream>
#include <algorithm>
using namespace std;
int main () {
     int arr[6] = {7 , 1 , 2 , 3 , 5 , 9};
     sort(arr, arr+6);
     cout << " The second smallest element in an array is :  " <<arr[1] ;
    return 0;
}