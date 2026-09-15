// Supercentral Point

#include <bits/stdc++.h>
using namespace std;

int main() {

    // تسريع عمليات الإدخال والإخراج للمنافسات البرمجية
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    short n;
    cin >> n;

    int arr1[n] , arr2[n];
    for(int i = 0 ; i < n ; i++) {
        cin >> arr1[i];
        cin >> arr2[i];
    }

    int superCentral = 0;
    for(int i = 0 ; i < n ; i++) {
        bool hasLeft = false;
        bool hasRight = false;
        bool hasLower = false;
        bool hasUpper = false;

        for(int j = 0 ; j < n ; j++) {
            if(i == j) continue;

            // جار يمين: x_j > x_i ونفس الـ y
                if (arr1[j] > arr1[i] && arr2[j] == arr2[i]) {
                    hasRight = true;
                }
                // جار يسار: x_j < x_i ونفس الـ y
                if (arr1[j] < arr1[i] && arr2[j] == arr2[i]) {
                    hasLeft = true;
                }
                // جار علوي: y_j > y_i ونفس الـ x
                if (arr2[j] > arr2[i] && arr1[j] == arr1[i]) {
                    hasUpper = true;
                }
                // جار سفلي: y_j < y_i ونفس الـ x
                if (arr2[j] < arr2[i] && arr1[j] == arr1[i]) {
                    hasLower = true;
                }
        }
        if(hasLeft and hasRight and hasLower and hasUpper)
            superCentral++;
    }
            cout << superCentral << "\n";

    return 0;
}