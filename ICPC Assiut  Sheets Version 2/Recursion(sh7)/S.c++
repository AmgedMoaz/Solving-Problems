// Array Average

#include <bits/stdc++.h>
using namespace std;

double average(int arr[] , int index);

int n;
double sum = 0;

int main() {

// لسرعة الإدخال والإخراج في لغة C++
ios_base::sync_with_stdio(false);
cin.tie(NULL);

cin >> n;
int arr[n];
for(int i = 0 ; i < n ; i++) cin >> arr[i];

double result = average(arr,0);
cout << fixed << setprecision(6) <<  result << "\n";

    return 0;
}
double average(int arr[] , int index) {
    if(index == n)
        return (double) (sum/n);                 // base case
        
    sum += arr[index];
    return average(arr,index+1);                 // recursive case
}