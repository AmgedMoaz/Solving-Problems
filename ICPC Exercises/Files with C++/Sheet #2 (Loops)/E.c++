// Team

#include <bits/stdc++.h>
using namespace std;

int main() {

int n;
cin >> n;

int counter = 0 , index = 0;
for(int i = 1 ; i <= n ; i++) {
    for(int j = 1 ; j <= 3 ; j++) {
        int x;
        cin >> x;
        if(x == 1) {
            index++;
        }
    }
    if(index >= 2) {
        counter++;
    }
   index = 0;
}
cout << counter << endl;

    return 0;
}