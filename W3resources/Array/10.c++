// Code a program to find the smallest element missing in a sorted array
#include <iostream>
using namespace std;

int main() {
    int arr[] = {0, 1, 2, 6, 9};
    int n = 5;

    for(int i = 0; i < n; i++) {
        if(arr[i] != i) {
            cout << "Smallest missing element: " << i;
            return 0;
        }
    }

    cout << "Smallest missing element: " << n;

    return 0;
}