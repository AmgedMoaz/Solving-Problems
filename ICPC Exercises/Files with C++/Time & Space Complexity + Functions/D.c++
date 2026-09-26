// Calculating Function

#include <bits/stdc++.h>
using namespace std;

long long solve(long long number);

int main() {

long long n;    cin >> n;
cout << solve(n) << "\n";

    return 0;
}
long long solve(long long num) {
    if(num%2 == 0)  return (num/2);
    else    return -(num/2+1);
}