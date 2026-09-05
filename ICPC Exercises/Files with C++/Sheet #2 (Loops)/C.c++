// Bear and Big Brother

#include <bits/stdc++.h>
using namespace std;

int main() {

int limak , bob;
cin >> limak >> bob;

int count_years = 0;
while(true) {
    if(limak > bob) {
        cout << count_years << endl;
        break;
    }
    limak *= 3;
    bob *= 2;
    count_years++;
}

    return 0;
}