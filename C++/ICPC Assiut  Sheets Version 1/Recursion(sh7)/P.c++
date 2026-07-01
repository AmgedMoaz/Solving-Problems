#include <iostream>
using namespace std;
int Counter = 0;
void getProcess(long long Number)
{
    if (Number == 1)
    {
        return;
    }
    Counter++;
    getProcess(Number/2)  ;
}
int main ()
{
    long long N;
    cin >> N;

    getProcess(N);
    cout << Counter;

    return 0;
}