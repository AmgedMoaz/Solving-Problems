#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
   int X1 , X2 , Y1 , Y2;
   cin >> X1 >> Y1 >> X2 >> Y2;

   int X3 , X4 , Y3 , Y4;
   cin >> X3 >> Y3 >> X4 >> Y4;

   int lines;
   cin >> lines;

   int MaxX = max({X1 , X2 , X3 , X4});
   int MaxY = max({Y1 , Y2 , Y3 , Y4});
   int MinX = min({X1 , X2 , X3 , X4});
   int MinY = min({Y1 , Y2 , Y3 , Y4});

   for (int i = 1 ; i <= lines ;i++)
    {
        int Xi , Yi;
        cin >> Xi >> Yi;

        if ( (Xi >= MinX && Xi <= MaxX) && (Yi >= MinY && Yi <= MaxY) )
        {
            cout << "YES" << endl;
        }
        else 
        {
            cout << "NO" << "\n";
        }

    }

    return 0;
}