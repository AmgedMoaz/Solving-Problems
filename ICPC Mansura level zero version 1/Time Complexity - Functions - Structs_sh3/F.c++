// 3D

#include <bits/stdc++.h>
using namespace std;

int main() {
    // لزيادة سرعة القراءة والكتابة
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> x(n), y(n), z(n);
    int cx[201] = {0}, cy[201] = {0}, cz[201] = {0};

    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i] >> z[i];
        cx[x[i] + 100]++;
        cy[y[i] + 100]++;
        cz[z[i] + 100]++;
    }

    for (int i = 0; i < n; i++) {
        cout << cx[x[i] + 100] - 1 << " "
             << cy[y[i] + 100] - 1 << " "
             << cz[z[i] + 100] - 1 << "\n";
    }

    return 0;
}