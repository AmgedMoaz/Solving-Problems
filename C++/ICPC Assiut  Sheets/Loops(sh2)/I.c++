#include <iostream>
using namespace std;
int main ()
{
int N;
cin >> N;
int reverse = 0 , temporory = N;
while(temporory > 0)
{
    reverse = reverse * 10 + temporory % 10;
    temporory /= 10;
}
cout << reverse << "\n"; 
if(reverse==N)
{
    cout << "YES";
}
else 
{
     cout << "NO";
}
    return 0;
}