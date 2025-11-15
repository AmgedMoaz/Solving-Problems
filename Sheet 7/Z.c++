#include <iostream>
using namespace std;
int Size , num , maxValue;
void print(int Counter)
{
 cin >> num;
 if (Counter == Size)
 {
    return;
 }
  if (Counter == 0)
  {
    cout << num << " ";
    maxValue = num;
  }
  else 
  {
    if (maxValue < num)
    {
        cout << num << " ";
        maxValue = num;
    }
    else 
    {
        cout << maxValue << " ";
    }
  }
  return print(Counter+1);
}
int main ()
{
  cin >> Size;
  print(0);
    return 0;
}