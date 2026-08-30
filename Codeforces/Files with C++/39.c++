// Write a code to solve problem by using two pointers

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sum1 = 0, sum2 = 0;
    int left = 0, right = n - 1;
    bool serejaTurn = true; // متغير للتبادل بين الدورين

    while (left <= right) {
        int chosenCard;
        
        // اختيار الكارت الأكبر من الطرفين
        if (arr[left] > arr[right]) {
            chosenCard = arr[left];
            left++;
        } else {
            chosenCard = arr[right];
            right--;
        }

        // إضافة النقاط للاعب صاحب الدور
        if (serejaTurn) {
            sum1 += chosenCard;
        } else {
            sum2 += chosenCard;
        }

        // عكس الدور للجولة القادمة
        serejaTurn = !serejaTurn;
    }

    cout << sum1 << " " << sum2 << "\n";

    return 0;
}