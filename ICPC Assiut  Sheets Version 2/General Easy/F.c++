// Fox and Snake

#include <bits/stdc++.h>
using namespace std;

int main() {
// لزيادة سرعة القراءة والكتابة
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n, m;
cin >> n >> m;

bool flag = true;
for (int i = 0; i < n; i++) {
    if (i % 2 == 0) {
        for (int j = 0; j < m; j++) {
            cout << "#";
        }  
    }else if(flag) {
        for (int j = 0; j < m - 1; j++) {
            cout << ".";
        }
        cout << "#";
        flag = false;
    }else {
        cout << "#";
        for (int j = 0; j < m - 1; j++) {
            cout << ".";
        }
        flag = true;
    }
    cout << endl;
}

return 0;
}