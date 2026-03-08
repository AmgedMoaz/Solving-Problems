// Code a program to find the largest three elements in an array
#include <iostream>
using namespace std;
int main () {
    int arr[6] = {12, 22 , 33 , 44 , 55 , 66};
    int first, second, third;
    first = second = third = 0;
    for(int i = 0 ; i < 6 ; i++){
        if(arr[i] > first){
            third = second;
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second){
            third = second;
            second = arr[i];
        }
        else if(arr[i] > third){
            third = arr[i];
        }
    }
    cout << "The largest three elements in the array are: " << first << ", " << second << ", " << third << endl;
    return 0;
}