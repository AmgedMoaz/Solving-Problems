// Tricky Sum

#include <bits/stdc++.h>
using namespace std;

long long solve(long long number);

int main() {

short t;    cin >> t;
while(t--) {
    long long n;  cin >> n;
    cout << solve(n) << endl;
}

    return 0;
}
long long solve(long long num) {
    long long tot_sum = 0;
    tot_sum = num*(num+1)/2;
    long long p = 1;
    long long powers_sum = 0;
    while(p <= num) {
        powers_sum += p;
        if(num/2 < p)   break;
        p *= 2;
    }
    return (tot_sum - 2*(powers_sum));
}