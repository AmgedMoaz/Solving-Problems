#include <iostream>
using namespace std;
int N;
void printPyramid(int row)
{ 
  if(row == 0) return;

  printPyramid(row-1);
  for(int i = 1 ; i <= N - row ; i++) cout << " ";
  for(int i = 1 ; i <= 2*row-1 ; i++) cout << "*";
  cout << "\n";
}
int main ()
{
   cin >> N;
   printPyramid(N);

    return 0;
}