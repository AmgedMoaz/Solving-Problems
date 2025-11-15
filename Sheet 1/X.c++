#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
long long L1,L2,R1,R2;
cin >> L1 >> R1 >> L2 >> R2;
int Left = max(L1,L2);
int Right = min(R1,R2);

if(Left<=Right)
{
    cout << Left << " " << Right ;
}
else
{
    cout << -1;
}
    return 0;
}