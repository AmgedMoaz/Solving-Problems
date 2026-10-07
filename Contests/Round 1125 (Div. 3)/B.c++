// Did Not Go to Print

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    vector<bool> printed(n + 1, false);
    stack<int> st;
    
    for (int i = 1; i <= n; ++i) {
        char cmd = s[i - 1];
        if (cmd == '1') {
            st.push(i);
        }else if (cmd == '2') {
            if (!st.empty()) {
                int doc = st.top();
                st.pop();
                printed[doc] = true;
            }else {
                printed[i] = true;
            }
        }else if (cmd == '3') {
            printed[i] = true;
        }
    }
    
    // جمع المستندات التي لم تطبع
    vector<int> unprinted;
    for (int i = 1; i <= n; ++i) {
        if (!printed[i]) {
            unprinted.push_back(i);
        }
    }
    
    // طباعة النتيجة
    cout << unprinted.size() << "\n";
    for (size_t i = 0; i < unprinted.size(); ++i) {
        cout << unprinted[i] << (i == unprinted.size() - 1 ? "" : " ");
    }
    cout << "\n";
}

int main() {
    // تحسين سرعة الإدخال والإخراج
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}