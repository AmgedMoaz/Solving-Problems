// Momen’s Golden Choice

#include <bits/stdc++.h>
using namespace std;

int main() {
   
int t;
cin >> t;

int a , b , c;
while(t--) {
    cin >> a >> b;
    int minValue;
    for(int i = a ; i <= b ; i++) {
        if(i == a)  minValue = (i-a)+(b-i);
        c = (i - a) + (b - i);
        minValue = min(c,minValue);
    }
    cout << minValue << endl;
}

    return 0;
}