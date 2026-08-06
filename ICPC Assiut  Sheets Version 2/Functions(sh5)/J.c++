 // Average
 #include <bits/stdc++.h>
 using namespace std;

 // Function to calculate the average of array of decimal numbers
double Average(double arr[] , int n);

int main() {

  int n;
  cin >> n;

   double arr[n];
    for(int i = 0 ; i < n ; i++) {
        cin >> arr[i];
    }

    double result = Average(arr , n);
     cout << fixed << setprecision(7) << result << "\n";

    return 0;
 }

 // Definition of function to calculate the average
 double Average(double arr[] , int a) {
    double sum = 0;
     for(int i = 0 ; i < a ; i++) {
        sum += arr[i];
     }
     return (sum / a);
 }