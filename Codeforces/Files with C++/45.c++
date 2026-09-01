// Ski Resort
// Write a code to solve problem by using 

#include <bits/stdc++.h>
using namespace std;

int main() {

short t;
cin >> t;

while(t--) {
    int n , k , q;
    cin >> n >> k >> q;

    int arr[n];
    for(int i = 0 ; i < n ; i++) cin >> arr[i];

    int l = 0;
    long long total_ways = 0;

    for (int r = 0; r < n; r++) {
        if (arr[r] > q) {
           // العنصر غير صالح، اترك النافذة السابقة وانقل l لأول عنصر بعد r
           l = r + 1;
        } else {
           // حجم النافذة الصالحة الحالية
           long long len = r - l + 1;
        
           // إذا كان حجم النافذة أطول من أو يساوي k
           // فإن كل نافذة تنتهي عند r وطولها >= k تُحسب كـ طريقة جديدة
           if (len >= k) {
              total_ways += (len - k + 1);
           }
        }
    }
    cout << total_ways << endl;                              
}

    return 0;
}