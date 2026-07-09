// Max and Min
#include <bits/stdc++.h>
using namespace std;
int main() {

    long long A , B , C;
    cin >> A >> B >> C;
    long long Max = max({A, B, C});
    long long Min = min({A, B, C});
    cout << Min << " " << Max<< endl;

    return 0;
}