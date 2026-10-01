// Vote to Include

#include <bits/stdc++.h>
using namespace std;

int main() {

int n;
cin >> n;

int count = 0;
for(int i = 0 ; i < n ; i++) {
    int counter = 0;
    int a , b , c;
    cin >> a >> b >> c;
    
    if(a == 1) counter++;
    if(b == 1) counter++;
    if(c == 1) counter++;

    if(counter >= 2) {
        count++;;
    }
}
cout << count << endl;

    return 0;
}