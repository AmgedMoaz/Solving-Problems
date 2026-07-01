#include <iostream>
using namespace std;
int main ()
{
char X;
cin >> X;
if(X>='a' && X<='z')
{
 X-= 32;  
cout << X;
}
else 
{
 X+=32;   
cout << X;
}
return 0;
}