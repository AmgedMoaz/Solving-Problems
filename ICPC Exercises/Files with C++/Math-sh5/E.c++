// Even Array

#include <bits/stdc++.h>
using namespace std;

void solve() {
    // لزيادة سرعة القراءة والكتابة
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    vector<int> a(n);
    
    int even_count = 0; // عدد الأعداد الزوجية
    int odd_count = 0;  // عدد الأعداد الفردية
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] % 2 == 0) even_count++;
        else odd_count++;
    }
    
    // عدد المؤشرات الزوجية والفردية المطلوبة
    int required_evens = (n + 1) / 2;
    int required_odds = n / 2;
    
    // إذا لم تتطابق الأعداد، فهذا مستحيل
    if(even_count != required_evens || odd_count != required_odds) {
        cout << -1 << "\n";
        return;
    }
    
    // حساب عدد الاختلافات في المؤشرات الزوجية
    int misplaced_evens = 0; // مؤشرات زوجية تحتوي على أعداد فردية
    for(int i = 0; i < n; i += 2) {
        if(a[i] % 2 != 0) {
            misplaced_evens++;
        }
    }
    
    cout << misplaced_evens << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    
    return 0;
}