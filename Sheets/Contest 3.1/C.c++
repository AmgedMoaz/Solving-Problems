#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    // فرز العناصر تنازليًا
    sort(a.begin(), a.end(), greater<int>());
    
    long long sum = 0;
    for (int i = 0; i < k; i++) {
        if (a[i] > 0) {  // نضيف العنصر فقط إذا كان موجبًا
            sum += a[i];
        } else {
            break;  // نتوقف إذا وصلنا إلى عناصر غير موجبة
        }
    }
    
    cout << sum << endl;
    return 0;
}