#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    
    for (int i = 0; i < N; ++i)
        cin >> A[i];

    int changes_pos = 0; // إذا بدأنا بموجب
    int changes_neg = 0; // إذا بدأنا بسالب

    for (int i = 0; i < N; ++i) {
        if (i % 2 == 0) {
            // الموضع الزوجي: موجب في النمط الأول، سالب في الثاني
            if (A[i] < 0) changes_pos++; // محتاج تغيير للإيجابي
            if (A[i] > 0) changes_neg++; // محتاج تغيير للسالب
        } else {
            // الموضع الفردي: سالب في النمط الأول، موجب في الثاني
            if (A[i] > 0) changes_pos++; // محتاج تغيير للسالب
            if (A[i] < 0) changes_neg++; // محتاج تغيير للموجب
        }
    }

    cout << min(changes_pos, changes_neg) << endl;
    return 0;
}
