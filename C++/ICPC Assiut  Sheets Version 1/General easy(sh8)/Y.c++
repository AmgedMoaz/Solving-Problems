#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main ()
{
  int n , x;
  cin >> n;
  vector <int> maths , prog , PE;
  for (int i = 1 ; i <= n ; i++)
  {   
    cin >> x;
    if ( x == 1)
    prog.push_back(i);
    else if (x == 2)
    maths.push_back(i);
    else if (x == 3)
    PE.push_back(i);
  }
  int ans = min(maths.size() , min(prog.size() , PE.size()));
  cout << ans << "\n";
  for (int i = 0 ; i < ans ; i++)
   {
     cout << maths[i] << " " << prog[i] << " " << PE[i] << endl;
   }

    return 0;
}