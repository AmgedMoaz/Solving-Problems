// Bag of Treasures

#include <bits/stdc++.h>
using namespace std;

int main () {
    
int n;
cin >> n;

int arr[n];
for (int i = 0; i < n; i++) cin >> arr[i];

int count = 1 , maxCount = 1;
for (int i = 0; i < n; i++) {
    count = 1;
    for(int j = 0; j < n; j++) {
        if(i == j ) continue;
        if (arr[i] == arr[j]) {
            count++;
        }
        maxCount = max(maxCount, count);
    }
}
cout << maxCount << endl;

    return 0;
}