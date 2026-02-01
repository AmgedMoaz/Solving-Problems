#include <iostream>
using namespace std;
int main ()
{
long long A,B,C,D;
cin >> A >> B >> C >> D;
 long long Result = A;
Result =(Result * B)%100;
Result =(Result * C)%100;
Result =(Result * D)%100;

if(Result<10)
{
    cout << 0 << Result;
}
else 
{
     cout << Result;
}
    return 0;
}