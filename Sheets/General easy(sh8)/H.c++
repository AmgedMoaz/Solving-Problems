#include <iostream>
using namespace std;
int arr[101];
int main ()
{
    int size ;
    cin >> size;
     for (int i = 1 ; i <= size ; i++)
     {
       int value;
       cin >> value;
       arr[value] = i;
     }
     for (int i = 1 ; i <= size ; i++)
     {
        cout << arr[i] << " ";
     }

    return 0;
}