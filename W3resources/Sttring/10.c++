// Code a program to check if a given string is a palindrome or not.
#include <iostream>
#include <string>
using namespace std;
  bool isPalindrome(string str) {
    int len = str.length();
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return false;
        }
    }
    return true;
  }
int main() {
   string word = "madam";
   if (isPalindrome(word)) {
       cout << "True" << endl;
   }   else {
       cout << "False" << endl;
   }
    return 0;
}