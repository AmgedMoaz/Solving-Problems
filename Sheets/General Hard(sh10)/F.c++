#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n, m;
    cin >> n >> m; // عدد الطلاب وعدد المواد

    vector<string> grades(n); 
    for (int i = 0; i < n; i++) {
        cin >> grades[i]; // قراءة درجات كل طالب كسطر (string)
    }

    vector<int> successful(n, 0); 
    // مصفوفة تعلمنا بيها الطلاب الناجحين (0 = مش ناجح لسه)

    // نلف على كل مادة (كل عمود)
    for (int j = 0; j < m; j++) {
        char maxMark = '0'; 
        // هنخزن أعلى درجة (كحرف، لأن الدرجات داخلة كسلاسل)

        // نجيب أعلى درجة في العمود j
        for (int i = 0; i < n; i++) {
            maxMark = max(maxMark, grades[i][j]);
        }

        // نعلّم كل طالب واخد أعلى درجة في العمود ده
        for (int i = 0; i < n; i++) {
            if (grades[i][j] == maxMark) {
                successful[i] = 1;
            }
        }
    }

    // نحسب عدد الطلاب الناجحين
    int result = 0;
    for (int i = 0; i < n; i++) {
        result += successful[i];
    }

    cout << result << "\n"; // نطبع النتيجة

    return 0;
}