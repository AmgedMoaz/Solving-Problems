// Koko And The Transformation

#include <bits/stdc++.h>
using namespace std;

int main() {
// لزيادة سرعة القراءة والكتابة
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int n , m;
cin >> n >> m;

int num , sum1 = 0 , sum2 = 0;
for(int i = 0 ; i < n ; i++){
    cin >> num;
    sum1 += num;
}

for(int j = 0 ; j < m ; j++){
    cin >> num;
    sum2 += num;
}

(sum1 == sum2)? cout << "Yes" << endl : cout << "No" << endl;

return 0;
}