// Code a program to Get the day of the week from a given date
#include <iostream>
#include <string>
#include <vector>  // Including the vector library for using vectors

using namespace std; // Using the standard namespace

// Function to find the day of the week for a given date
std::string day_of_the_week(std::string day) {
    int month = stoi(day.substr(0, 2));   // Extracting the month from the date string and converting it to an integer
    int _day = stoi(day.substr(3, 2));    // Extracting the day from the date string and converting it to an integer
    int year = stoi(day.substr(6, 4));    // Extracting the year from the date string and converting it to an integer

    // Vector storing the number of days in each month
    vector<int> days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; 

    // Vector storing the names of the days in a week
    vector<string> dates = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    int d = _day; 

    
    for (int i = 0; i < month - 1; i++) 
        d += days[i];

    
    if (((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) && month > 2) 
        d++;

    
    for (int i = 1971; i < year; i++) {
        if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0) 
            d += 366; 
        else 
            d += 365; 
    }

    
    string result = dates[(d % 7 + 3) % 7];
    return result; 
}

// Main function
int main() {
    string date1, date2, date3, date4; 

    date1 = "02/05/1980"; 
    cout << "Date: " << date1 << "  Day of the week: " << day_of_the_week(date1);

    date2 = "01/24/1990"; 
    cout << "\nDate: " << date2 << "  Day of the week: " << day_of_the_week(date2);

    date3 = "01/05/2019"; 
    cout << "\nDate: " << date3 << "  Day of the week: " << day_of_the_week(date3); 

    date4 = "11/17/2022"; 
    cout << "\nDate: " << date4 << "  Day of the week: " << day_of_the_week(date4); 

    return 0;
}