// Code a program to find the next greater element of every element of a given array of integers
#include <iostream>
using namespace std;

int main() {
    int arr[] = {7,12,24,6,10};
    int n = 5;

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[j] > arr[i]) {
                cout << arr[i] << " -> " << arr[j] << endl;
                break;
            }
        }
    }

    return 0;
}