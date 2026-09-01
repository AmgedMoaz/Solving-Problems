// Favorite Sequence
// Write a code to solve problem by using two pointers

#include <bits/stdc++.h>
using namespace std;

int main() {

    short t;
    cin >> t;

    while(t--) {
        short n;
        cin >> n;
        
        int arr[n];
        for(int i = 0 ; i < n ; i++)  cin >> arr[i];

        int left = 0 , right = n-1;
        bool isLeft = true;
        int newarr[n];

        int i = 0;
        while(left <= right) {
            if(isLeft) newarr[i++] = arr[left++];
            else newarr[i++] = arr[right--];

            isLeft = !isLeft;
        }
        for (int j = 0; j < n; j++) cout << newarr[j] << " ";
        cout << endl;
    }

    return 0;
}