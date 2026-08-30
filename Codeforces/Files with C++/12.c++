#include <bits/stdc++.h>
using namespace std;
int main () {
   int number;
    cin >> number;
   string arr;
    cin >> arr;
     int counter = 0;
   
        for(int i = 0 ; i < number-1 ; i++)
        {
            if(arr[i] == arr[i+1])
            {
                counter++;
            }
        }
         cout << counter << endl;
    return 0;
}