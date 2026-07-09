#include <bits/stdc++.h>
using namespace std;

int main () {
    int requests, l, distress = 0;
    long long available;
    char c;
    cin >> requests >> available;
    for(int j = 0; j < requests; j++) {
        cin >> c >> l;
        if(c == '+') {
            available += l;
        } else {
            if (available >= l)
                available -= l;
            else
                distress++;
        }
    }
    cout << available << " " << distress << endl;
    return 0;
}