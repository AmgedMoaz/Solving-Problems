// Code a program to find the second largest elementin an array
#include <iostream>
using namespace std;
int main () {
    int arr[6] = {12 , 21 , 11 , 13 , 31 ,14};
    int first , second;
    first = 0;
    second = 0;
    for(int i = 0 ; i < 6 ; i++)
    {
        if(arr[i] > first )
        { 
           second = first;
           first = arr[i];
        }
    }
      cout << "The second largest element is : " << second << "\n";

    return 0;
}