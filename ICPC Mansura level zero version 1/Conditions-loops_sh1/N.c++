// Team

#include<bits/stdc++.h>
using namespace std;

int main() {

    // لزيادة سرعة القراءة والكتابة
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int a,b,c;

    int count = 0;
    for(int i = 0 ; i < n ; i++) {
        cin >> a >> b >> c;

        if(a == 1 and b == 1) {
            count++;
        }else if(a == 1 and c == 1) {
            count++;
        }else if(b == 1 and c == 1) {
            count++;
        }
    }
    cout << count << endl;

    return 0;
}