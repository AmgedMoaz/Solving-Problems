#include <iostream>
using namespace std;
int main ()
{
long long a , b , c , d ;
cin >>  a >> b >> c >> d ;

if(d==(a+b-c))
{
    cout << "YES";
}
else if(d==(a-b+c))
{
    cout << "YES";
}
else if(d==(a*b+c))
{
    cout << "YES";
}
else if(d==(a*b-c))
{
    cout << "YES";
}
else if(d==(a-b*c))
{
    cout << "YES";
}
else if(d==(a+b*c))
{
    cout << "YES";
}
else 
{
    cout << "NO";
}
    return 0;
}