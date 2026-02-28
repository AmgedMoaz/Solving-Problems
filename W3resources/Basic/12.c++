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