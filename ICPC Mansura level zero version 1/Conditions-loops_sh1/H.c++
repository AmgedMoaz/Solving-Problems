// Division?

#include<bits/stdc++.h>
using namespace std;

int main() {

    // لزيادة سرعة القراءة والكتابة
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    int rating;
    while(t--) {
        cin >> rating;
    
        if(rating <= 1399) {
            cout << "Division 4\n";
        }else if(rating >= 1400 and rating <= 1599) {
            cout << "Division 3\n";
        }else if(rating >= 1600 and rating <= 1899) {
            cout << "Division 2\n";
        }else {
            cout << "Division 1\n";
        }
    }

    return 0;
}