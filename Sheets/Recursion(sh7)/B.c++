#include <iostream>
using namespace std;

void print(int N)
{
    if (N == 0)
        return;

    // first go down to 1
    print(N - 1);

    // then print as we come back up
    cout << N << endl;
}

int main()
{
    int Number;
    cin >> Number;
    print(Number);
    return 0;
}