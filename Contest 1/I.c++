#include <iostream>
using namespace std;
int main ()
{
int N;
cin >> N;
if(N>=10 && N<=99)
{
int tens = N/10;
int units = N%10;
if(units!=0 && tens%units==0)
{
    cout << "YES";
}
else if(tens!=0 && units%tens==0)
{
    cout << "YES";
}
else 
{
    cout << "NO";
} 
}

    return 0;
}