#include <iostream>
using namespace std;
int R , C , A[100][100] , B[100][100];
void sumMatrix(int i, int j) {
    // إذا خلصنا كل الصفوف -> نوقف
    if (i == R) return;

    // إذا خلصنا الأعمدة -> ننزل للصف التالي
    if (j == C) {
        cout << "\n";
        sumMatrix(i + 1, 0);
        return;
    }

    // نجمع العنصرين ونطبع
    cout << A[i][j] + B[i][j];

    // مسافة بين الأرقام (إلا لو آخر عنصر في الصف)
    if (j < C - 1) cout << " ";

    // نكمل للعنصر اللي بعده
    sumMatrix(i, j + 1);
}
int main ()
{
   cin >> R >> C;
   for (int i = 0 ; i < R ; i++)
   {
     for (int j = 0 ; j < C ; j++)
     {
        cin >> A[i][j];
     }
   }
   for (int i = 0 ; i < R ; i++)
   {
     for (int j = 0 ; j < C ; j++)
     {
        cin >> B[i][j];
     }
   }
   sumMatrix(0, 0); // نبدأ من أول عنصر

    return 0;
}