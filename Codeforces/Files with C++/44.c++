// Black and White Stripe
// Write a code to solve problem by using Sliding Window Technique

#include <bits/stdc++.h>
using namespace std;

int main() {

short t;
cin >> t;

while(t--) {
    int n , k;
    cin >> n >> k;

    string s;
    cin >> s;

    int current_w = 0;
    
    // 1. حساب عدد 'W' في أول نافذة بحجم k
    for (int i = 0; i < k; i++) {
        if (s[i] == 'W') {
            current_w++;
        }
    }
    
    int min_w = current_w;
    
    // 2. تحريك النافذة (Sliding Window) عبر بقية السلسلة
    for (int i = k; i < n; i++) {
        // إذا كان العنصر الذي س يخرج من النافذة من جهة اليسار هو 'W'
        if (s[i - k] == 'W') {
            current_w--;
        }
        
        // إذا كان العنصر الجديد يدخل النافذة من جهة اليمين هو 'W'
        if (s[i] == 'W') {
            current_w++;
        }
        
        // الاحتفاظ بأقل عدد من التغييرات المطلوبة
        min_w = min(min_w, current_w);
    }
    
    cout << min_w << "\n";
}

    return 0;
}