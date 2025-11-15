#include <iostream>
using namespace std;
int main ()
{
string X;
cin >> X;
char first_Digit_char =X[0];
int first_Digit = first_Digit_char ;
if(first_Digit%2==0)
{
    cout << "EVEN";
}
else
{
    cout << "ODD";
}
return 0;
}