 //  Max and MIN
 #include <bits/stdc++.h>
 using namespace std;

 // prototype function to find the maximum and minimum of two numbers
 void min_max(int arr[] , int x);

 int main() {

     int n;
     cin >> n;

      int arr[n];
      for(int i = 0 ; i < n ; i++) {
          cin >> arr[i];
      }

      min_max(arr , n);

     return 0;
 }

 //Definition of the min_max function
    void min_max(int arr[] , int x) {
        int max = arr[0];
        int min = arr[0];
        for(int i = 1 ; i < x ; i++) {
            if(arr[i] > max) {
                max = arr[i];
            }
            if(arr[i] < min) {
                min = arr[i];
            }
        }
        cout << min << " " << max << endl;
    }