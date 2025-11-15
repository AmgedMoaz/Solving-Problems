#include <iostream>
using namespace std;
int main ()
{
long long a , b;
cin >> a >> b;
long long sum = 0;
sum = a-b;

if(sum>=0)
{
    cout << sum;
}

else 
{
   cout << "0";
}

    return 0;
}