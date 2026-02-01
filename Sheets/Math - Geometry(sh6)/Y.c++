#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int tc = 1; tc <= T; tc++) {
        int N;
        cin >> N;

        int x1, y1, x2, y2;
        // قراءة أول مستطيل وتعيين حدوده كمنطقة تقاطع مبدئية
        cin >> x1 >> y1 >> x2 >> y2;
        int left = min(x1, x2);
        int bottom = min(y1, y2);
        int right = max(x1, x2);
        int top = max(y1, y2);

        for (int i = 1; i < N; i++) {
            cin >> x1 >> y1 >> x2 >> y2;
            // تحديث حدود التقاطع
            left = max(left, min(x1, x2));
            bottom = max(bottom, min(y1, y2));
            right = min(right, max(x1, x2));
            top = min(top, max(y1, y2));
        }

        int area = 0;
        if (left < right && bottom < top) {
            area = (right - left) * (top - bottom);
        }

        cout << "Case #" << tc << ": " << area << "\n";
    }

    return 0;
}