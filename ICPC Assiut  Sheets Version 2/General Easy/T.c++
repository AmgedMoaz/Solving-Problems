// Helpful Maths

#include <bits/stdc++.h>
using namespace std;

int main() {
    // تحسين سرعة الإدخال والإخراج
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    vector<char> arr;
    for(int i = 0 ; i < s.length() ; i++) {
        if( isdigit(s[i]) ) {
            arr.push_back(s[i]);
        }
    }

    sort(arr.begin() , arr.end());

    for(int i = 0 ; i < arr.size() ; i++) {
        cout << arr[i];
        if(i != arr.size()-1 )
            cout << "+";
    }
    
    return 0;
}