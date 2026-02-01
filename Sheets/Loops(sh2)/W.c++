#include <iostream>
using namespace std;
int main ()
{
int N;
cin >> N;

// Upper Part

for(int i = 1 ; i <=N ; i++)
{
for(int j = N-i; j >= 1; j--)
{
cout << " ";
}
for(int k = 1 ; k<= (2*i-1) ; k++)
{
cout << "*";
}
cout << endl;
}

// Lower Part 

for(int i = N; i >= 1; i--) {
        for(int j = 1; j <= N - i; j++) {
            cout << " ";
        }
        for(int k = 1; k <= 2 * i - 1; k++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}