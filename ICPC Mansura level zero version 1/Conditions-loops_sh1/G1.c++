// Strange Summation

#include<bits/stdc++.h>
using namespace std;

int main() {

    // لزيادة سرعة القراءة والكتابة
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n,m;
    cin >> n >> m;

    int lastDig1 = n%10;
    int lastDig2 = m%10;

    cout << (lastDig1+lastDig2) << endl;

    return 0;
}