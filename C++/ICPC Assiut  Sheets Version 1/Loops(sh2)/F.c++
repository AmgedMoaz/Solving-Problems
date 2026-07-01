#include <iostream>
using namespace std;
int main ()
{
int N , X = 0;
cin >> N;
for(int i = 1 ; i<=12 ; i++)
{
X++ ;
cout << N << " * " << X << " = " << (N*X) << endl;
}

    return 0;
}