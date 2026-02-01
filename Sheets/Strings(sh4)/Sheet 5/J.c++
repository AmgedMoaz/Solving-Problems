#include <iostream>
#include <iomanip>
using namespace std;;
void Average(double Array[] , int N )
{
    double Sum = 0;
for (int i = 0 ; i < N ; i++)
{
  Sum += Array[i];
}
double final = (Sum / N);
cout << fixed << setprecision(6) << final << endl;
}
int main ()
{
int N;
cin >> N;
double Array[N];
   for (int i = 0 ; i < N ; i++)
   {
     cin >> Array[i];
   }

   Average(Array,N);

    return 0;
}