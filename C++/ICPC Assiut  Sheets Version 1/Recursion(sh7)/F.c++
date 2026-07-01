#include <iostream>
using namespace std;
void print(int Array[] , int Size ,int index)
{
    if(index > Size-1)
    {
        return;
    }
    print(Array,Size,index+2);
    cout << Array[index] << " ";
}
int main ()
{
   int Size;
   cin >> Size;

   int Array[Size];
   for (int i = 0 ; i < Size ; i++)
   {
    cin >> Array[i];
   }

   print(Array,Size,0);

    return 0;
}