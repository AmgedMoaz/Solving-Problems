// Code a program to Compute the sum of the two given integer values
#include<iostream>
using namespace std;
int Test(int n1 , int n2) {
 return n1 == n2 ? (n1+n2)*3 : (n1+n2);
}
int main () {
cout << Test(2,3) << "\n";
cout << Test(1,4) << "\n";
cout << Test(2,2) << "\n";
    return 0;
}