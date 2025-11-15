#include <iostream>
using namespace std;
int main ()
{
int A , B;
cin >> A >> B;
bool found = false;

for(int i = A ; i<=B ; i++)
{
int X = i;
bool check = true;
while(X>0)
{
  if(X%10!=4 && X%10!=7)
  {
    check = false;
    break;
  }
X/=10;
}
if(check)
{
    found = true;
    cout << i << " ";
}

}

if(found==false)
{
    cout << -1;
}

    return 0;
}