#include <iostream>
using namespace std;
int main ()
{
 int X1 , Y1; 
 int X2 , Y2; 
 int X3 , Y3; 
 cin >> X1 >> Y1;
 cin >> X2 >> Y2;
 cin >> X3 >> Y3;

    if ( ((Y3 - Y2 )*(X2 - X1)) == (Y2 - Y1)*(X3 - X2) )
     {
        cout << "YES";
     }
    else 
     {
        cout << "NO";
     }

    return 0;
} 