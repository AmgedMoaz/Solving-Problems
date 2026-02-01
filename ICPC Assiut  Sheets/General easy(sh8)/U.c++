#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
   string name;
   cin >> name;
   long long maxNum = stoi(name);
   string copy = name;
   name.erase(name.size() - 1,1);
   copy.erase(copy.size() - 2,1);
   long long res = max(maxNum,max((long long)stoi(copy),(long long)stoi(name)));
   cout << res << "\n";

    return 0;
}