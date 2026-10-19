// Make a triangle!

#include<bits/stdc++.h>
using namespace std;

int main() {

    // لزيادة سرعة القراءة والكتابة
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b,c;
    cin >> a >> b >> c;

    int result = 0;
    if(a >= b and a >= c) {
        result = max(0,a-(b+c)+1);
    }else if(b >= a and b >= c) {
        result = max(0,b-(a+c)+1);
    }else {
        result = max(0,c-(a+b)+1);
    }
    cout << result << endl;

    return 0;
}