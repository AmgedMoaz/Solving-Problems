#include <iostream>
using namespace std;
int arr[101];
int main ()
{
  string value1 , value2;
  cin >> value1 >> value2;
  int counter = 0;
  for(int i = 0 ; i < value2.length() ; i++)
  { 
     if(value1[counter] == value2[i])
     {
        counter++;
     }
  }
    cout << ++counter << endl;
  
    return 0;
}