// Palindrome Array

#include <iostream>
using namespace std;

bool check;
int index = 0;

// Function to show if palindrome or not
bool isPalindrome(int n , int arr[]);

int main ()
{

    int n;
    cin >> n;

     int arr[n];
     for(int i = 0 ; i < n ; i++) cin >> arr[i]; 

      if(isPalindrome(n,arr)) {
        cout << "YES";
      }else {
        cout << "NO";
      }

    return 0;
}

// Definition the palindrome
bool isPalindrome(int n , int arr[]) {
    if(index == n/2) return check;             // base case

    else {
        if(arr[index] == arr[n-index-1]) {
            check = true;
            index++;
            return isPalindrome(n,arr);         // recursive case
        }else {
            return false;                      // base case
        }
    }
}