// The maximum path-sum

#include <iostream>
using namespace std;

short n , m;
int arr[10][10];

int getSumPath(int index1 , int index2);

int main ()
{

// لسرعة الإدخال والإخراج في لغة C++
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    
    cin >> n >> m;
    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < m ; j++) {
            cin >> arr[i][j];
        }
    }

    cout << getSumPath(0,0) << endl;

    return 0;
}
int getSumPath(int i , int j) {
     if (i == n - 1 && j == m - 1)
        return arr[i][j];                              // base case

    // آخر صف -> نتحرك يمين فقط
    if (i == n - 1)
        return arr[i][j] + getSumPath(i, j + 1);       // recursive case

    // آخر عمود -> ننزل فقط
    if (j == m - 1)
        return arr[i][j] + getSumPath(i + 1, j);       // recursive case

    // عندنا الاختيارين
    int down = getSumPath(i + 1, j);                   // recursive case
    int right = getSumPath(i, j + 1);                  // recursive case

    return arr[i][j] + max(down, right);
}