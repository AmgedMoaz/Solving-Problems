#include <iostream>
using namespace std;

void print(int N)
{
    if (N == 0)  // base case
        return;

    cout << N;           // print current number
    if (N > 1) cout << " "; // add space only if not the last number

    print(N - 1);        // recursive call
}

int main()
{
    int Number;
    cin >> Number;
    print(Number);
    return 0;
}