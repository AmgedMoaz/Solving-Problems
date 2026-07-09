// Code aprogram to Check whether a given year is a leap year not
#include <iostream>
using namespace std;

// Function to check if a year is a leap year or not
bool is_leap_year(int year) {
    if (year % 400 == 0) 
        return true; 
    if (year % 100 == 0)
        return false; 
    if (year % 4 == 0)
        return true; 
    return false;
}	

// Main function
int main() {
    int y; 

    y = 1900;
    cout << "Is Leap year: " << y << "?  Century of the year: " << is_leap_year(y); 

    y = 1999; 
    cout << "\nIs Leap year: " << y << "?  Century of the year: " << is_leap_year(y); 

    y = 2000; 
    cout << "\nIs Leap year: " << y << "?  Century of the year: " << is_leap_year(y); 

    y = 2010; 
    cout << "\nIs Leap year: " << y << "?  Century of the year: " << is_leap_year(y); 

    y = 2020; 
    cout << "\nIs Leap year: " << y << "?  Century of the year: " << is_leap_year(y); 

    return 0; 
}