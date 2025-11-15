#include <iostream>
#include <algorithm>
using namespace std;
void Swap(int &X , int &Y)
{
  swap(X,Y);
}
int main ()
{
int Num1 , Num2;
cin >> Num1 >> Num2;
Swap(Num1,Num2);
cout << Num1 << " " << Num2;

   return 0;
}