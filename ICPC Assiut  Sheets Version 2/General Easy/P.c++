// Police Recruits

#include <bits/stdc++.h>
using namespace std;

int main() {
    // لزيادة سرعة القراءة والكتابة
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int sum = 0 , counter = 0;
    for(int i = 0 ; i < n ; i++) {
        
        int x;
        cin >> x;
        if(x > 0)
            sum += x;

        else if(x < 0) {
            if(sum == 0) {
                counter++;
            }else {
                sum += x;
            }
        }
    }
    cout << counter << endl;

    return 0;
}