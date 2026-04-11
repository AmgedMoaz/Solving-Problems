// Code a program to find the number of days in a month for a given year.
#include <iostream>
using namespace std; 

// Function to check if a year is a leap year or not
bool is_leap_year(int y) {
  return y % 400 == 0 || (y % 4 == 0 && y % 100 != 0); // Returns true if the year is divisible by 400 or divisible by 4 but not by 100
}

// Function to get the number of days in a month for a given year
int no_of_days(int month, int year) {
  switch (month) { // Switch statement to check the month
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    return 31; // Months with 31 days
    break;

  case 4:
  case 6:
  case 9:
  case 11:
    return 30; // Months with 30 days
    break;

  case 2:
    if (is_leap_year(year) == 1)
      return 29; // February in a leap year
    else
      return 28; // February in a non-leap year
    break;

  default:
    break;
  }

  return 0; // Return 0 if month input is invalid
}

// Main function
int main() {
  int year = 0; 
  int month = 0; 
  int days;

  cout << "Input Year: "; 
  cin >> year; 
  cout << "Input Month: ";
  cin >> month; 

  if (year > 0 && (month > 0 && month < 13)) { 
    
    cout << "Number of days of the year " << year << " and month " << month << " is: " << no_of_days(month, year) << endl;
  } else {
    cout << "Wrong year/month!"; 
  }

  return 0; 
}