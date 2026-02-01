#include <iostream>
#include <algorithm>
using namespace std;
int main ()
{
long long A,B,C;
cin >> A >> B >> C;

long long original[3]={A,B,C};

long long sorted[3]={A,B,C};
sort(sorted,sorted+3);

for(int i=0 ; i<3 ; i++)
{
    cout << sorted[i] << endl;
}
    cout << endl;
for(int i=0 ; i<3 ; i++)
{
   cout << original[i] << endl; 
}

    return 0;
}