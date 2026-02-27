// Code a program to display arithmetic operations with mixed data type.
#include <iostream>
using namespace std;
int main () {
 int n1 = 4 , n2 = 12;
 double m1 = 12.4 , m2 = 2.7;
    cout << "\n\n Display arithmetic operations with mixed data type :\n\n";
    cout << "      [+]  \n";
    cout <<" "<< m1 << " + " << m2 << " = " << m1+m2 << endl;
    cout <<" "<< n1 << " + " << n2 << " = " << n1+n2 << endl;
    cout <<" "<< m1 << " + " << n2 << " = " << m1+n2 << endl;
    cout <<" "<< m1 << " + " << n2 << " = " << m1+n2 << endl;
    cout << "\n\n      [-]  \n";
    cout <<" "<< m1 << " - " << m2 << " = " << m1-m2 << endl;
    cout <<" "<< n1 << " - " << n2 << " = " << n1-n2 << endl;
    cout <<" "<< m1 << " - " << n2 << " = " << m1-n2 << endl;
    cout <<" "<< m1 << " - " << n2 << " = " << m1-n2 << endl;
    cout << "\n\n      [*]  \n";
    cout <<" "<< m1 << " * " << m2 << " = " << m1*m2 << endl;
    cout <<" "<< n1 << " * " << n2 << " = " << n1*n2 << endl;
    cout <<" "<< m1 << " * " << n2 << " = " << m1*n2 << endl;
    cout <<" "<< m1 << " * " << n2 << " = " << m1*n2 << endl;
    cout << "\n\n      [/]  \n";
    cout <<" "<< m1 << " / " << m2 << " = " << m1/m2 << endl;
    cout <<" "<< n1 << " / " << n2 << " = " << n1/n2 << endl;
    cout <<" "<< m1 << " / " << n2 << " = " << m1/n2 << endl;
    cout <<" "<< m1 << " / " << n2 << " = " << m1/n2 << endl;

    return 0;
}