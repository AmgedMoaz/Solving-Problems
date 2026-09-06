// Utopian Tree

#include <bits/stdc++.h>
using namespace std;

int main() {

int t;
cin >> t;

while(t--) {
    int n;
    cin >> n;

    int height = 1;
    for(int i = 1 ; i <= n ; i++) {
        if(i%2 != 0) {
            height *= 2;
        }else {
            height += 1;
        }
    }
    cout << height << endl;
}

    return 0;
}