#include <iostream>
using namespace std;
int main ()
{

 int T;
cin >> T;

while (T--)
{
int w , h ;
cin >> w >> h;

if ( w == h )
{
    cout << "Square" << endl;
}
else 
{
        cout << "Rectangle" << "\n";
}
}

    return 0;
}