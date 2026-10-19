// Intersection

#include<bits/stdc++.h>
using namespace std;

int main() {

    // لزيادة سرعة القراءة والكتابة
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int l1,r1,l2,r2;
    cin >> l1 >> r1 >> l2 >> r2;

    int maxLeft = max(l1,l2);
    int minRight = min(r1,r2);

    if(maxLeft > minRight) {
        cout << -1 << endl;
    }else {
        cout << maxLeft << " " << minRight << endl;
    }

    return 0;
}