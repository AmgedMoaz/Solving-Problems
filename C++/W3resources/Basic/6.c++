// Code a program to Check whether the primitive values crossing the limits or not
#include <iostream>
using namespace std;
int main() {
    cout << "\n\n Check whether the primitive values crossing the limits or not :\n"; // Outputting a message to check primitive values
	cout << "--------------------------------------------------------------------\n"; // Outputting a separator line

    // Declaring and initializing various primitive data type variables
    char gender = 'F';             
    bool isEmployed = true;         
    unsigned short numOfsons = 2;  
    short yearOfAppt = 2009;       
    unsigned int YearlyPackage = 1500000;
    double height = 79.48;         
    float gpa = 4.69f;             
    long totalDrawan = 12047235L;  
    long long balance = 995324987LL; 

    // Outputting the values of the variables
    cout << " The Gender is : " << gender << endl;
    cout << " Is she married? : " << isEmployed << endl;
    cout << " Number of sons she has : " << numOfsons << endl;
    cout << " Year of her appointment : " << yearOfAppt << endl;
    cout << " Salary for a year : " << YearlyPackage << endl;
    cout << " Height is : " << height << endl;
    cout << " GPA is " << gpa << endl;
    cout << " Salary drawn up to : " << totalDrawan << endl;
    cout << " Balance till : " << balance << endl;

    return 0;
}