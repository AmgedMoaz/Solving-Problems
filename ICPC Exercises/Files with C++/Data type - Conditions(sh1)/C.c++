// Blood Pressure 
#include <bits/stdc++.h>
using namespace std;

int main() {

    int a , b;
    cin >> a >> b;

    float c = (float) (a-b)/3;
    c += b;

    cout << fixed << setprecision(7) << c << endl;

    return 0;
}