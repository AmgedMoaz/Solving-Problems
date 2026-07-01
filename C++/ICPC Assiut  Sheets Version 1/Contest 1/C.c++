#include <iostream>
using namespace std;
int main ()
{
char C;
cin >> C;
if(C=='z')
{
C = 'a';
cout << C;
}
else if(C>='a' && C<'z')
{
  C = C+1;
    cout << C;
}

    return 0;
}
