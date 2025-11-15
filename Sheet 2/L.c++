#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
int A , B;
cin >> A >> B;
for(int i = min(A,B) ; i>=1 ; i--)
{
if(A%i==0 && B%i==0)
{
    cout << i;
    break;
}
}

    return 0;
}