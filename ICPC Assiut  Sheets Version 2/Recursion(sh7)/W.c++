// Reach Value

#include <iostream>
using namespace std;

long long Number;
bool reachValue(long long num)
{
    if (num > Number) 
    {
        return false;                                          // base case
    }else if (num == Number) {
        return true;                                           // base case
    }else {
        return reachValue(num * 10) || reachValue(num * 20);   // recursive case
    }
}
int main ()
{

// لسرعة الإدخال والإخراج في لغة C++
ios_base::sync_with_stdio(false);
cin.tie(NULL);

  int T;
  cin >> T;

    while (T--)
     {
        cin >> Number;
        if (reachValue(1)) 
        {
            cout << "YES" << "\n";
        }
        else 
        { 
             cout << "NO" << endl;
        }
     }

    return 0;
}