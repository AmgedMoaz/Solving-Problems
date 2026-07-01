#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
    while(true)
    {
        int N , M;
        cin >> N >> M;
        if(N<=0 || M<=0)
        {
            break;
        }
        int sum = 0;
for(int i = min(N,M) ; i<=max(N,M) ; i++)
{
cout << i << " ";
sum+=i;
}
  cout << "sum ="<< sum << endl;
    }

    return 0;
}