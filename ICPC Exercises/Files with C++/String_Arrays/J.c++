// Advantage

#include <bits/stdc++.h>
using namespace std;

int main() {

    short t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        int arr1[n];
        int arr2[n];
        int maxElement = 0;
        for(int i = 0 ; i < n ; i++) {
            cin >> arr1[i];
            if(maxElement <= arr1[i]) {
                maxElement = arr1[i];
            }
            arr2[i ]= arr1[i];
        } 

        sort(arr2,arr2+n);
        int secondMaXElement = arr2[n-2];
        for(int i = 0 ; i < n ; i++) {
            if(arr1[i] != maxElement) {
                cout << (arr1[i] - maxElement) << " ";
            }else {
                if(secondMaXElement == maxElement) 
                    cout << 0 << " ";
                else
                    cout << (maxElement - secondMaXElement) << " ";   
            }
        }
          cout << endl;
    }

    return 0;
}