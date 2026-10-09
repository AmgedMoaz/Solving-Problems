// Polycarp and the Day of Pi

#include <bits/stdc++.h>
using namespace std;

int main() {
    // لزيادة سرعة القراءة والكتابة
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string pi = "314159265358979323846264338327";
    int t;
    cin >> t;

    string in;
    while(t--) {
        cin >> in;

        int counter = 0;
        for(int i = 0 ; i < in.length() ; i++) {
            if(in[i] == pi[i]) {
                counter++;
            }else {
                break;
            }
        }
        cout << counter << "\n";
    }
        
    return 0;
}