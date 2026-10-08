// The New Year: Meeting Friends

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[3];
    for(int i = 0 ; i < 3 ; i++) {
        cin >> arr[i];
    }
    
    // إضافة بداية ونهاية المصفوفة للدوال وتصحيح العلامة *
    int max_value = *max_element(arr, arr + 3);
    int min_value = *min_element(arr, arr + 3);

    // طباعة الفرق بين أكبر وأصغر قيمة
    cout << max_value - min_value << "\n";

    return 0;
}