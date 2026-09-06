// Young Physicist

#include <bits/stdc++.h>
using namespace std;

int main() {

short n;
cin >> n;


int x = 0 , y = 0 , z = 0;

for(int i = 0 ; i < n ; i++) {
    int c ;
    for(int j = 1 ; j <= 3 ; j++) {
        cin >> c;
        if(j == 1) {
            x += c;
        }else if(j == 2) {
            y += c;
        }else {
            z += c;
        }
    }
}
if(x == 0 && y == 0 and z == 0) {
    cout << "YES" << endl;
}else {
    cout << "NO" << endl;
}

    return 0;
}