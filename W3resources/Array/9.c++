// Code a program to sort a given unsorted array of integers, in wave form
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[] = {10, 5, 6, 3, 2, 20};
    int n = 6;

    // ترتيب المصفوفة
    sort(arr, arr + n);

    // تبديل كل عنصرين
    for(int i = 0; i < n - 1; i += 2) {
        swap(arr[i], arr[i + 1]);
    }

    // طباعة المصفوفة
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}