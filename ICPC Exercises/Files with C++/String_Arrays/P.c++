// Supercentral Point

#include <bits/stdc++.h>
using namespace std;

int main() {

    // تسريع عمليات الإدخال والإخراج للمنافسات البرمجية
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    short n;
    cin >> n;

    int arr[7];
    for(int i = 0 ; i < 7 ; i++) {
        cin >> arr[i];
    }

    int sum = 0;
    int x = 0;
    
    while(true) {

        sum += arr[x];
        
        if(sum >= n) {
            cout << x+1;
            break;
        }
        x++;
        if(x == 7) {
            x = 0;
        }
    }

    return 0;
}