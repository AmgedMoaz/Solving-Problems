// George and Accommodation

#include <bits/stdc++.h>
using namespace std;

int main() {
// لزيادة سرعة القراءة والكتابة
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;
cin >> n;

int freeRooms = 0;
while(n--) {
    int p , q;
    cin >> p >> q;
    if(q - p >= 2) {
        freeRooms++;
    }
}
cout << freeRooms << endl;

return 0;
}