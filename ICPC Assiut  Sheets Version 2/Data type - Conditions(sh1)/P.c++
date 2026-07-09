// First digit !
#include <bits/stdc++.h>
using namespace std;
int main() {

int X;
cin >> X;
int first_digit = X / 1000;
(first_digit % 2 == 0)? cout << "EVEN" : cout << "ODD";

    return 0;
}