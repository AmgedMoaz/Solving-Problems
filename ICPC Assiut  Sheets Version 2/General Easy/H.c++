// Presents

#include <bits/stdc++.h>
using namespace std;

int arr[105];

int main() {
// لزيادة سرعة القراءة والكتابة
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n;
cin >> n;

int value;
for(int i = 1 ; i <= n ; i++) {
    cin >> value;
    arr[value] = i;
}

for(int i = 1 ; i <= n ; i++) {
    cout << arr[i] << " ";
}
cout << endl;

return 0;
}