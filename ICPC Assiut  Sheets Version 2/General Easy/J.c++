// Lucky Division

#include <bits/stdc++.h>
using namespace std;

int main() {
// لزيادة سرعة القراءة والكتابة
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int Num;
int lucky[14]={4,7,44,47,74,77,444,447,474,477,744,774,747,777};
cin >> Num;
for(int i = 0 ; i < 14 ; i++) {
    if(Num % lucky[i] == 0) {
        cout << "YES";
        return 0;
    }
}
cout << "NO";

return 0;
}