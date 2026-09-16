// Anton and Letters

#include <bits/stdc++.h>
using namespace std;

int main() {

    // تسريع عمليات الإدخال والإخراج للمنافسات البرمجية
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    short n;  cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++) cin >> arr[i];

    for(int i = 0 ; i < n ; i++) {
        int counter = 1;
        for(int j = 0 ; j < n ; j++) {
            if(i == j) continue;

            if(arr[i] < arr[j]) {
                counter++;
            }
        }
        cout << counter << " ";
    }

    return 0;
}