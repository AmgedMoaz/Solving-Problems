// Code a program to find largest element in an array
#include <iostream>
using namespace std;
int main () {
    int arr[5] = {12, 13 , 7 , 22};
   int max = arr[0];
    for(int i = 0 ; i < 5 ; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout << "Largest element in the array is: " << max << endl;
    return 0;
}