// Code a program to compute the absolute difference between n and 51. If n is greater than 51 return triple the absolute difference.
#include <iostream>
using namespace std;
int Calc(int x)
{
    return x>51? (x-51)*3 : 0-(x-51);
}
int main () {
cout << Calc(53) << endl;
cout << Calc(30) << endl;
cout << Calc(51) << endl;
    return 0;
} 