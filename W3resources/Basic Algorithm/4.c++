// Code a program to check if a given integer is within 10 of 100 or 200.
#include <iostream>
using namespace std;
bool Test(int x)
{
    if (abs(x-100)<=10 || abs(x-200)<=10)
        return true;
    else
        return false;
}
int main () {
cout << Test(93) << endl;
cout << Test(89) << endl;
cout << Test(103) << endl;
    return 0;
}