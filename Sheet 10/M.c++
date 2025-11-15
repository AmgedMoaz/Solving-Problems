#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int k;
    cin >> k;

    int letters = 0, qmarks = 0, stars = 0;
    for (char c : s) {
        if (isalpha(c)) letters++;
        else if (c == '?') qmarks++;
        else if (c == '*') stars++;
    }

    int minLen = letters - (qmarks + stars);
    if (k < minLen) {
        cout << "Impossible\n";
        return 0;
    }
    if (stars == 0 && k > letters) { // لا توجد نجوم للتوسيع
        cout << "Impossible\n";
        return 0;
    }

    int extra = k - minLen; // عدد الحروف التي نحتاج إضافتها فوق الحد الأدنى
    string result;

    for (int i = 0; i < (int)s.size(); ++i) {
        if (!isalpha(s[i])) continue; // نتخطى الرموز نفسها

        if (i + 1 < (int)s.size() && s[i+1] == '?') {
            // يمكن حذف الحرف أو تركه مرة واحدة
            if (extra > 0) {
                result.push_back(s[i]);
                extra--;
            }
            // وإلا نشيله (نطبع 0 منه)
        }
        else if (i + 1 < (int)s.size() && s[i+1] == '*') {
            // يمكن حذف الحرف أو تكراره أي عدد مرات
            if (extra > 0) {
                // نطبع الحرف بالضبط extra مرات (لأن في minLen افترضنا إنه محذوف)
                for (int j = 0; j < extra; ++j) result.push_back(s[i]);
                extra = 0;
            }
            // إذا extra == 0 نبقى نحذفه (لا نطبع منه)
        }
        else {
            // حرف إلزامي
            result.push_back(s[i]);
        }
    }

    cout << result << '\n';
    return 0;
}