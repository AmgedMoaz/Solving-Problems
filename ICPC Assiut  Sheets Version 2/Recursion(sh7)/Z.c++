// Left Max

#include <iostream>
using namespace std;

int maxValue , n;

void maxRange(int arr[] , int current);

int main ()
{

// لسرعة الإدخال والإخراج في لغة C++
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    
    cin >> n;

    int arr[n];
    for(int i =  0 ; i < n ; i++) cin >> arr[i];

    maxValue = arr[0];
    
    cout << maxValue << " ";
    maxRange(arr,1);

    return 0;
}
void maxRange(int arr[] , int current) {
    if(current == n)
        return;                                     // base case

    if(arr[current] > maxValue)
        maxValue = arr[current];

    cout << maxValue << " ";
    maxRange(arr,current+1);                        // recursive case
}