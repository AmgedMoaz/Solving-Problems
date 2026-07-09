// Code a program to display the size od fundamental data types in C++ 
#include <iostream>
using namespace std;
int main (){
    cout << "\nThe Size of Fundamental Data Types in C++ : \n\n";
  cout << "The Size of char is         :         " << sizeof(char) << " byte\n";
  cout << "The Size of int is          :         " << sizeof(int) << " bytes\n";
  cout << "The Size of short int is    :         " << sizeof(short int) << " bytes\n";
  cout << "The Size of long int is     :         " << sizeof(long int) << " bytes\n";
  cout << "The Size of float is        :         " << sizeof(float) << " bytes\n";
  cout << "The Size of double is       :         " << sizeof(double) << " bytes\n";
  cout << "The size of long long is    :         " << sizeof(long long) << " bytes \n";
  cout << "The size of long double is  :         " << sizeof(long double) << " bytes \n";
  cout << "The size of bool is         :         " << sizeof(bool) << " bytes \n\n";

    return 0;
}