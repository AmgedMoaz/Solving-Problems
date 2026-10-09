// Free Ice Cream

#include <bits/stdc++.h>
using namespace std;

int main() {
    // لزيادة سرعة القراءة والكتابة
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long sum;
    cin >> n >> sum;

    char ch;
    int count = 0;
    while(n--) {
        int d;
        cin >> ch >> d;

        if(ch == '+') {
            sum += d;
        }else if(ch == '-') {
            if(d <= sum) {
                sum -= d;
            }else {
                count++;
            }
        }
    }
    cout << sum << " " << count << endl;

    return 0;
}