// Average 2

#include<bits/stdc++.h>
using namespace std;

int main() {

    // لزيادة سرعة القراءة والكتابة
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double a , b , c;
    cin >> a >> b >> c;

    double avg = ( (a*2) + (b*3) + (c*5) ) / 10;
    cout << "MEDIA = " << fixed << setprecision(1) << avg << endl;

    return 0;
}