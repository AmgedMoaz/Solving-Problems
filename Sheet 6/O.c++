#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// جمع رقم كبير (كسلسلة) مع رقم صغير
string addBig(const string &a, int b) {
    string res = a;
    int carry = b;
    for (int i = res.size() - 1; i >= 0 && carry > 0; i--) {
        int sum = (res[i] - '0') + (carry % 10);
        carry /= 10;
        if (sum >= 10) {
            sum -= 10;
            carry++;
        }
        res[i] = char(sum + '0');
    }
    while (carry > 0) {
        res.insert(res.begin(), char((carry % 10) + '0'));
        carry /= 10;
    }
    return res;
}

// ضرب رقم كبير (كسلسلة) مع رقم صغير
string mulBig(const string &a, int b) {
    string res = "";
    int carry = 0;
    for (int i = a.size() - 1; i >= 0; i--) {
        long long prod = (a[i] - '0') * 1LL * b + carry;
        res.push_back(char((prod % 10) + '0'));
        carry = prod / 10;
    }
    while (carry > 0) {
        res.push_back(char((carry % 10) + '0'));
        carry /= 10;
    }
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    string N;
    cin >> N;
    cout << addBig(N, 9999) << "\n";
    cout << mulBig(N, 9999) << "\n";
    return 0;
}