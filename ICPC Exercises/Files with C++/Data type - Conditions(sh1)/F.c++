// New Generation ABC
#include <bits/stdc++.h>
using namespace std;

int main() {

int n;
cin >> n;

if(n >= 1 and n <= 125){
    cout << 4 << endl;
}else if(n >= 126 and n <= 211){
    cout << 6 << endl;
}else if(n >= 212 and n <= 214){
    cout << 8 << endl;
}

    return 0;
}