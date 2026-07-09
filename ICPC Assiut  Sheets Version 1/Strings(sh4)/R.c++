#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    if (!(cin >> N)) return 0;
    string S;
    cin >> S;

    deque<char> dq(S.begin(), S.end());
    long long score = 0;

    while (!dq.empty()) {
        char c = dq.front();
        dq.pop_front(); // نأخذ الحرف الحالي ونعالجه (يمثل "انتقال المؤشر لليمين")
        if (c == 'V') {
            score += 5;
        } else if (c == 'W') {
            score += 2;
        } else if (c == 'X') {
            if (!dq.empty()) dq.pop_front(); // حذف الحرف التالي إن وُجد
        } else if (c == 'Y') {
            if (!dq.empty()) {
                char nxt = dq.front();
                dq.pop_front();
                dq.push_back(nxt); // ننتقل بالحرف التالي إلى نهاية السلسلة
            }
        } else if (c == 'Z') {
            if (!dq.empty()) {
                char nxt = dq.front();
                if (nxt == 'V') {
                    score /= 5;
                    dq.pop_front(); // نحذف V
                } else if (nxt == 'W') {
                    score /= 2;
                    dq.pop_front(); // نحذف W
                }
                // إذا كان التالي شيء آخر: لا نفعل شيئًا
            }
        }
    }

    cout << score << '\n';
    return 0;
}
