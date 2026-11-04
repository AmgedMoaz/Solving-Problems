// Highest Y

#include <bits/stdc++.h>
using namespace std;

int main() {
    // لزيادة سرعة القراءة والكتابة
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int x , y;

    vector<pair<int, int>> v;

    while(n--) {
        cin >> x >> y;
        v.push_back({y, x});
    }

    sort(v.rbegin(), v.rend()); 

    for(auto it : v) {
        cout << it.second << " " << it.first << "\n";
    }

    return 0;
}