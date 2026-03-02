// Code a program to check two given integers and return true if one of them is 30 or if their sum is 30.
#include <iostream>
using namespace std;
bool Test(int x , int y)
{
    if(x == 30 || y == 30 || (x+y == 30))
        return true;
    else
        return false;
}
int main () {
cout << Test(30,0) << endl;
cout << Test(25,5) << endl;
cout << Test(20,30) << endl;
cout << Test(20,25) << endl;
    return 0;
}