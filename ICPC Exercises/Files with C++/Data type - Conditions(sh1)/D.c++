// Counting 
#include <bits/stdc++.h>
using namespace std;

int main() {

int a , b;
cin >> a >> b;

int counter = 0;
if(a < b) {
    counter = b-a+1;
    cout << counter << endl;
}else {
    cout << counter << endl;
}

    return 0;
}