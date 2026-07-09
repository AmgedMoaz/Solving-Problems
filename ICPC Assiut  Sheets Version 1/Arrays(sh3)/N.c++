#include <iostream>
using namespace std; 
int main ()
{

int A , B;
cin >> A >> B;

string code; 
cin >> code;

int S = code.size();

if ( S < A || code[A] != '-')
{
   cout << "No";
    return 0;
}

for (int i = 0 ; i < S ; i++)
{

if (code[i] >= '0' && code[i] <= '9')
{
    continue;
}

if(i!=A)
{
    cout << "No";
    return 0;
}

}

  cout << "Yes";

    return 0;
}