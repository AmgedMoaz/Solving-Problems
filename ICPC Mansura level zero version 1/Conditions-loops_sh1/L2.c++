// Draw it.

#include<bits/stdc++.h>
using namespace std;

int main() {

    // لزيادة سرعة القراءة والكتابة
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char s;
    cin >> s;

    int n,x;
    cin >> n;

    for(int i = 0 ; i < n ; i++) {
        cin >> x;
        while(x--) {
            cout << s;
        }
        cout << endl;
    }

    return 0;
}