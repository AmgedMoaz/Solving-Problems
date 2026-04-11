// Code a programm to find the sum of first n natural numbers.
#include <iostream>
using namespace std;
int main (){
    int Sum = 0;
    int x = 0;
    cout << "Input number\n";
    cin >> x;
       for(int i = 1 ; i <= x ; i++)
       {
           cout << i << endl;
           Sum += i;
       }
       cout << "The Sum of Numbers is : " << Sum;
    return 0;
}