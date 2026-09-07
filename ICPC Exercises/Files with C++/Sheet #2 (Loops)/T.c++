// Sail

#include <bits/stdc++.h>
using namespace std;

int main() {
    // تسريع عمليات الإدخال والإخراج
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    long long sx, sy, ex, ey;
    
    // قراءة البيانات الأساسية
    cin >> t >> sx >> sy >> ex >> ey;

    string wind;
    cin >> wind; // قراءة نص اتجاهات الرياح

    // حساب المسافة المتبقية أفقيًا ورأسيًا
    long long dx = ex - sx;
    long long dy = ey - sy;

    int earliest_time = -1; // القيمة الافتراضية في حال عدم الوصول

    // المرور على اتجاهات الرياح ثانية بثانية
    for (int i = 0; i < t; ++i) {
        char dir = wind[i];

        // التحرك فقط إذا كانت الرياح في الاتجاه المطلوب
        if (dir == 'E' && dx > 0) {
            dx--; // نقترب خطوة نحو الشرق
        } else if (dir == 'W' && dx < 0) {
            dx++; // نقترب خطوة نحو الغرب
        } else if (dir == 'N' && dy > 0) {
            dy--; // نقترب خطوة نحو الشمال
        } else if (dir == 'S' && dy < 0) {
            dy++; // نقترب خطوة نحو الجنوب
        }

        // إذا وصلنا للهدف (أصبحت المسافات المتبقية صفر)
        if (dx == 0 && dy == 0) {
            earliest_time = i + 1; // رقم الثانية (نضيف 1 لأن التكرار يبدأ من 0)
            break; // نخرج فوراً للحصول على "أبكر وقت"
        }
    }

    // طباعة الناتج النهائي
    cout << earliest_time << "\n";

    return 0;
}