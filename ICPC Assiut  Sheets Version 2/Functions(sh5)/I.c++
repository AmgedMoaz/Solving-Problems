 // Swapping With Matrix
#include <bits/stdc++.h>
using namespace std;

int n;

// Function to swap two elements in a matrix
void swapElements(int arr[505][505], int x , int y);

int main() {

    int x , y;
    cin >> n >> x >> y;

     int arr[505][505];

      for(int i = 0 ; i < n ; i++) {
          for(int j = 0 ; j < n ; j++) {
              cin >> arr[i][j];
          }
      }
         swapElements(arr , x , y);
          for(int i = 0 ; i < n ; i++) {
           for(int j = 0 ; j < n ; j++) {
              cout << arr[i][j] << " ";
           }
            cout << endl;
          }

    return 0;
}

 // Defining the swap function
void swapElements(int arr[505][505] , int x , int y) {
    x--;
    y--;
    for(int i = 0 ; i < n ; i++) {
        swap(arr[x][i], arr[y][i]);
    }
    for(int i = 0 ; i < n ; i++) {
        swap(arr[i][x] , arr[i][y]);
    }
}