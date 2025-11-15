#include <iostream>
using namespace std;
int print( int N)
{
 for (int i = 1 ; i <= N ;i++)  
 {
    cout << i;
    if (i!=N)
    {
        cout << " ";
    }
 } 
}
int main ()
{

int Number;
cin >> Number;

 print(Number);

    return 0;
}