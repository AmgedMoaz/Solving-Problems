#include <iostream>
using namespace std;
int main ()
{
long long N;
cin >> N;
int Years = N/365;
N=N%365;
int Months = N/30;
int Days = N%30;
cout << Years << " " << "years" << endl;
cout << Months << " " << "months" << endl;
cout << Days << " " <<"days" << endl;
return 0;
}