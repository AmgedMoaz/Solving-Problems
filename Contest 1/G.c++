#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    long long e, m, b;
    cin >> e >> m >> b;
    
    // الحل الأمثل: 
    // 1. أولاً، اصنع أكبر عدد ممكن من النوع ج (1 عين، 1 فم، 1 جسم)
    // 2. ثم استخدم العيون والأجسام المتبقية لصنع النوع أ (2 عين، 1 جسم)
    
    long long result = 0;
    
    // إذا كان الفم هو المورد المحدد الرئيسي
    if (m <= e && m <= b) {
        result = m; // النوع ج
        e -= m;
        b -= m;
        result += min(e / 2, b); // النوع أ
    }
    // إذا كانت العيون أو الأجسام هي المورد المحدد
    else {
        result = min(e, b);
    }
    
    cout << result << endl;
    
    return 0;
}