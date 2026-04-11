// Code a program to Convert a given year to century
#include <iostream>
#include <cmath>
using namespace std;
double year_to_century(int year){
    return floor((year-1)/100.0) + 1;
}
int main (){

int y;
y = 1900;
cout << "\nYear: " << y << ",  Century of the year: " << year_to_century(y);
y = 1990;
cout << "\nYear: " << y << ",  Century of the year: " << year_to_century(y);
y = 1700;
cout << "\nYear: " << y << ",  Century of the year: " << year_to_century(y);
y = 2000;
cout << "\nYear: " << y << ",  Century of the year: " << year_to_century(y);
y = 2010;
cout << "\nYear: " << y << ",  Century of the year: " << year_to_century(y);
y= 2020;
cout << "\nYear: " << y << ",  Century of the year: " << year_to_century(y);
    return 0;
}