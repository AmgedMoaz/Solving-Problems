// Base K

#include <bits/stdc++.h>
using namespace std;

long long solve(long long a , long long b);

int main() {

short k;    cin >> k;
string aStr , bStr;
cin >> aStr >> bStr;

// تحويل كل نص إلى رقم عشري (long long) بناءً على الأساس k
    long long a = stoll(aStr, nullptr, k);
    long long b = stoll(bStr, nullptr, k);
    cout << solve(a,b) << endl;

    return 0;
}
long long solve(long long a , long long b) {
    return a*b;
}