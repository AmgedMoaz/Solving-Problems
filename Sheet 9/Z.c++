#include <bits/stdc++.h>
using namespace std;
long long gcd(long long ob1 , long long ob2)
{
  while (ob2 != 0)
  {
    return gcd(ob2,ob1%ob2);
  }
  return ob1;
}
long long lcm(long long ob1,long long ob2)
{
    return ((ob1/gcd(ob1,ob2))*ob2);
}
int main ()
{
   long long num1 , num2 , num3 , num4;
    char c1 , c2;
     cin >> num1 >> c1 >> num2 >> num3 >> c2 >> num4;
      cout << lcm(num1,num3) << "/" << gcd(num2,num4);

    return 0;
}