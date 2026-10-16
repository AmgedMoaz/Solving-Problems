// Is it rated?

#include <bits/stdc++.h>
using namespace std;

int main() {
    // تحسين سرعة الإدخال والإخراج
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;  cin >> n;
    bool isRated = false;
    bool hasInversion = false;

    int current = 4126;
    while(n--) {
        int a , b;
        cin >> a >> b;

        if(a != b) {
            isRated = true;
        }else {
            if(current < a) {
                hasInversion = true;
            }
        }
        current = a;
    }

    if(isRated) {
        cout << "rated" << endl;
    }else {
        if(hasInversion) {
            cout << "unrated\n";
        }else {
            cout << "maybe\n";
        }
    }
    
    return 0;
}