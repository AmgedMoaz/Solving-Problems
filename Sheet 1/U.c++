#include <iostream>
using namespace std;
int main ()
{
float N;
cin >> N;
int Value= N;
float Difference = N - Value;
if(Difference==0)
{
    cout << "int " << N;
}
else 
{
    cout << "float " << Value << " " << Difference;
}

    return 0;
}