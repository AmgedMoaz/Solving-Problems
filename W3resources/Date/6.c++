// Code a program to Count the Number of Days Between Two Given Dates
#include <iostream> 
#include <string>
using namespace std; 

// Function to check if a year is a leap year
bool is_leap_year(int y) {
  return y % 400 == 0 || (y % 4 == 0 && y % 100 != 0); // Checking leap year conditions
}

// Function to calculate the number of days in a month for a given year
int days_in_month(int m, int y) {
  if (m == 4 || m == 6 || m == 9 || m == 11)
    return 30;
  else if (m == 2) 
    return is_leap_year(y) ? 29 : 28; // Return 29 if leap year, else 28
  else 
    return 31;
}

// Function to calculate the total number of days between dates
int days_Between_dates(string date) {
  // Extracting year, month, and day from the date string
  int year = stoi(date.substr(0, 4)); // Extracting year part of the date
  int month = stoi(date.substr(5, 2)); // Extracting month part of the date
  int day = stoi(date.substr(8, 2)); // Extracting day part of the date

  int result = day; // Initializing result with day value

  // Calculating days for years from 1971 to the given year
  for (int yy = 1971; yy < year; yy++)
    result += is_leap_year(yy) ? 366 : 365; // Adding 366 days for leap years, else 365 days

  // Calculating days for each month until the given month
  for (int mm = 1; mm < month; mm++)
    result += days_in_month(month, year); // Adding days for each month based on the year

  return result; // Returning the total number of days
}

// Main function
int main() {
  // Calculating and displaying the number of days between specified dates
  cout << "\nDays between 2022/01/31 to 2022/01/01 = " << abs(days_Between_dates("2022/01/31") - days_Between_dates("2022/01/01")) << endl;
  cout << "\nDays between 2000/01/31 to 2019/02/01 = " << abs(days_Between_dates("2019/02/01") - days_Between_dates("2000/01/31")) << endl;
  cout << "\nDays between 1980/05/31 to 1995/12/12 = " << abs(days_Between_dates("1995/12/12") - days_Between_dates("1980/05/31")) << endl;

  return 0;
}