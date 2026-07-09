// Code a program to check if a given positive number is a multiple of 3 or a multiple of 7.
#include <iostream>
#include <string>
using namespace std;
bool Multiple(int N){
    if (N % 3 == 0 || N % 7 == 0) {
        return true;
    } else {
        return false;
    }
}
int main () {
  cout << Multiple(3) << endl;
  cout << Multiple(7) << endl; 
  cout << Multiple(12) << endl;
  cout << Multiple(37) << endl;
   return 0;
}