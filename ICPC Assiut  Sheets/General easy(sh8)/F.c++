#include <iostream>
#include <string>
using namespace std;
int main ()
{
    int n , m ;
    cin >> n >> m ;
    bool flag = 1;
    for(int i = 0 ; i < n ; i++)
    {
      if (i % 2 == 0)
      {
        cout << string(m,'#') << endl;
      }
      else if (flag)
      {
        cout << string(m-1 , '.') << "#\n";
        flag = not flag;
      }
      else
      {
        cout << "#" << string(m-1,'.') << endl;
        flag = not flag;     
      }

    }

    return 0;
}