#include <iostream>
using namespace std;
int main ()
{
int N;
cin >> N;
int start = 0 , end = 1; 
if(N==1)
{
    cout << start << endl;
    return 0;
}
cout << start << " " << end;
for(int i = 3 ; i <= N ; i++)
{
int Final = start + end ;
cout << " " << Final ;
start = end;
end = Final;
}

    return 0 ;
}