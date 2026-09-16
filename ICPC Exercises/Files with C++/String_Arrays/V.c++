// Helpful Maths

#include <bits/stdc++.h>
using namespace std;

int main() {

    // تسريع عمليات الإدخال والإخراج للمنافسات البرمجية
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // تسريع عمليات الإدخال والإخراج للمنافسات البرمجية
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string row;  
    cin >> row;
    
    vector<char> arr;
    
    // استخراج الأرقام فقط وتخزينها
    for(int i = 0; i < row.length(); i++) {
        if(isdigit(row[i])) {
            arr.push_back(row[i]);
        }
    }

    // ترتيب الأرقام تصاعدياً
    sort(arr.begin(), arr.end());

    // طباعة النتيجة مع وضع علامة + بينها
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i];
        if(i != arr.size() - 1) {
            cout << "+";
        }
    }
    cout << "\n";

    return 0;
}