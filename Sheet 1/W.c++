#include <iostream>
using namespace std;
int main ()
{
int A,B,C;
char Op,Q;
cin >> A >> Op >> B >> Q >> C;
int Result;
if(Op=='+')
{
   Result = A+B;
}
else if(Op=='-')
{
   Result = A-B;
}
else if(Op=='*')
{
   Result = A*B; 
}

if(Result==C)
{
    cout << "Yes";
}
else 
{
    cout << Result;
}
    return 0;
}