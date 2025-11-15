#include <iostream> 
#include <algorithm>
#include <cmath>
using namespace std;
int main ()
{
int T;
cin >> T;
while(T--)
{
int N;
cin >> N;

int counter = 0;
while(N>0)
{
counter += (N%2);
N/=2;
}
int Answer = 0;
for(int i = 0 ; i < counter ; i++)
{
Answer += pow(2,i);
}
cout << Answer << endl;
}

    return 0;
}