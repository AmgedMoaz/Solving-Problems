#include <iostream>
using namespace std;
int main ()
{
int N , A , B;
cin >> N >> A >> B;
int Answer =0;
for(int i = 1 ; i<=N ; i++)
{
int X=i , sum = 0;
while(X>0)
{
sum+=X%10;
X/=10;
}
if(sum>=A && sum<=B)
{
Answer+=i;
}
}
cout << Answer << endl;
 return 0;   
}