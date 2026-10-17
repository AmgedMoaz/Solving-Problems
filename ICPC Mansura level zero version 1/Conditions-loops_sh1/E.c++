// Difference

#include<bits/stdc++.h>
using namespace std;

int main() {
    // لزيادة سرعة القراءة والكتابة
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long a , b , c , d;
    cin >> a >> b >> c >> d;

    long long expression = (a*b) - (c*d); 
    cout << "DIFERENCA = " << expression << endl;

    return 0;
}