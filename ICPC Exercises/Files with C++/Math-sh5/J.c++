// Number Transformation

#include <bits/stdc++.h>
using namespace std;

int main() {
    // لزيادة سرعة القراءة والكتابة
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;

    while (t--) {
        int x, y;
        cin >> x >> y;
        if (y % x != 0)
            cout << 0 << " " << 0 << endl;
        else
            cout << 1 << " " << (y/x) << endl; 
    }
        
    return 0;
}