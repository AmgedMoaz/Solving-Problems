// Creating Expression1

#include <bits/stdc++.h>
using namespace std;

int n , x;
int arr[20];

bool getExpression(int sum , int index);

int main()
{

// لسرعة الإدخال والإخراج في لغة C++
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    cin >> n >> x;
    for(int i = 0 ; i < n ; i++) cin >> arr[i];

    if(getExpression(arr[0],1)) cout << "YES\n";
    else 
        cout << "NO\n";

    return 0;
}
bool getExpression(int sum , int index) {
    if(index == n)
        return sum == x;                                     // base case

    bool sum1 = getExpression(sum + arr[index] , index+1);   // recursive case
    bool sum2 = getExpression(sum - arr[index] , index+1);   // resursive case
    return sum1 || sum2;
}