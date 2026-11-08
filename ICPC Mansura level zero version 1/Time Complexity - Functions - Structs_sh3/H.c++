// Empedocles Problem

#include <bits/stdc++.h>
using namespace std;

int main() {
    // لزيادة سرعة القراءة والكتابة
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    bool flag = true;

    string a0 , b0 , c0 , d0;
    cin >> a0 >> b0 >> c0 >> d0;
    
    string a , b , c , d;
    for (int i = 0; i < n-1; i++) {
        cin >> a >> b >> c >> d;
        
        if (a != a0 || b != b0 || c != c0 || d != d0) {
            flag = false;
            break;
        }
    }

    if (flag) {
        cout << "Empedocles was right\n";
    } else {
        cout << "you were right\n";
    }

    return 0;
}