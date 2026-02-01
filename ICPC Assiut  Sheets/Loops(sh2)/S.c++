# include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
int T;
int X , Y;
cin >> T;

while (T--)
{
    cin >> X >> Y;
int sum = 0;
int start = min(X,Y)+1;
for(int i = start ; i<max(X,Y) ; i++)
{
    if(i%2!=0)
    {
        sum+=i;
    }
}
  
    cout << sum << endl;
    
}

    return 0;
}