 // N Times
 #include <bits/stdc++.h>
 using namespace std;

 // Function to print a character N times
void printCharNTimes(int num , char character);

 int main() {
    
    int t , n;
    char ch;

     cin >> t;
     while(t--) {
         cin >> n >> ch; // Read the number of times and the character from input
         printCharNTimes(n, ch); // Call the function to print the character N times
     }

    return 0;
 }

 // Definition of the function to print a character N times
 void printCharNTimes(int N , char c) {
    for (int i = 0; i < N; ++i) {
        cout << c << " ";
    }
    cout << endl; // Print a newline after printing the character N times
 } 