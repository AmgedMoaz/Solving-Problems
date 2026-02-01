#include <iostream>
using namespace std;
int Counter = 0;
void Process(int Number)
{
    Counter++;
    if (Number == 1)
    {
        return;
    }
    else if (Number % 2 == 0)
    {
        Process(Number/2);
    }
    else 
    {
      Process(3*Number+1);  
    }
}
int main ()
{
  int N;
  cin >> N;

  Process(N);
  cout << Counter;

    return 0;
}