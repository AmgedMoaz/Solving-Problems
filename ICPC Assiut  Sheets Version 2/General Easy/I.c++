// Colorful Stones (Simplified Edition)

#include <bits/stdc++.h>
using namespace std;

int main() {
// لزيادة سرعة القراءة والكتابة
ios_base::sync_with_stdio(false);
cin.tie(NULL);

string s , t;
cin >> s >> t;

int pos = 0;
for(int i = 0 ; i < t.length() ; i++){
    if(s[pos] == t[i]){
        pos++;
    }
}
cout << pos + 1 << endl;

return 0;
}