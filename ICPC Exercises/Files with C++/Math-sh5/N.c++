// Food for Animals

#include <bits/stdc++.h>
using namespace std;

int main() {
    // لزيادة سرعة القراءة والكتابة
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    int a , b , c , x , y;
    while(t--) {
        cin >> a >> b >> c >> x >> y;
        
        if(a < x) {
            if(a+c >= x) {
                c -= x-a;
            }else {
                cout << "NO" << endl;
                continue;
            }
        }

        if(b < y) {
            if(b+c >= y) {
                c -= y-b;
            }else {
                cout << "NO" << endl;
                continue;
            }
        }
        cout << "YES" << "\n";
    }
        
    return 0;
}