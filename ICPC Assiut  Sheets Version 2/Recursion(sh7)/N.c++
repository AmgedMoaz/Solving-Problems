// Sum of a Matrix

#include <iostream>
using namespace std;

int R , C , A[100][100] , B[100][100];

// Function to calculate the items of 2 matrices
void sumMatrix(int i , int j);

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

// Definition the sum function
void sumMatrix(int i, int j) {
   
    if (i == R) return;                    // base case

    
    if (j == C) {
        cout << "\n";
        sumMatrix(i + 1, 0);               // recursive case
        return;
    }

    cout << A[i][j] + B[i][j];

    if (j < C - 1) cout << " ";

    sumMatrix(i, j + 1);                    // recursive case
}