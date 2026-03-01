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