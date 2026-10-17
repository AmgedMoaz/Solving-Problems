// Team Olympiad

#include <bits/stdc++.h>
using namespace std;

int main() {
    // تحسين سرعة الإدخال والإخراج
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> arr(n);
    vector<int> arr1;
    vector<int> arr2;
    vector<int> arr3;
    for(int i = 0 ; i < n ; i++) {
        cin >> arr[i];
    }

    int p = 0 , m = 0 , pe = 0;
    for(int i = 0 ; i < n ; i++) { 
        if(arr[i] == 1) {
            p++;
            arr1.push_back(i+1);
        }else if(arr[i] == 2) {
            m++;
            arr2.push_back(i+1);
        }else {
            pe++;
            arr3.push_back(i+1);
        }
    } 

    int minTeam = min({p,m,pe});
    cout << minTeam << endl;
    
    int index = 0;
    while(minTeam--) {
        cout << arr1[index] << " " << arr2[index] << " " << arr3[index] << endl;
        index++;
    }
    return 0;
}