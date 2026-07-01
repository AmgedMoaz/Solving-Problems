#include <bits/stdc++.h>
using namespace std;

class Calculator {
    private:
        int N1 , N2;
    public:
     Calculator()
     {
        cout << "Enter first number: ";
        cin >> N1;
        cout << "Enter second number: ";
        cin >> N2;
     }
     Calculator(int a , int b)
     {
        N1 = a;
        N2 = b;
     }
     int Sum()
     {
        return N1 + N2;
     }
     float Division()
     {
        if(N2 == 0)
        {
            cout << "Division by zero is not allowed." << endl;
            return 0; // Return 0 or handle as needed
        }
        else 
        {
            return(float) N1 / N2;
        }
     }
     int multiply()
     {
        return N1 * N2;
     }
     int Modulo()
     {
        if(N2 == 0)
        {
            cout << "Modulo by zero is not allowed." << endl;
            return 0; // Return 0 or handle as needed
        }
        else 
        {
            return N1 % N2;
        }
     }
};
int main ()
{
  Calculator ob;
    cout << "Sum: " << ob.Sum() << endl;
    cout << "Division: " << ob.Division() << endl;
    cout << "Multiplication: " << ob.multiply() << endl;
    cout << "Modulo: " << ob.Modulo() << endl;
  Calculator ob2(10, 5);
    cout << "Sum: " << ob2.Sum() << endl;   
    cout << "Division: " << ob2.Division() << endl;
    cout << "Multiplication: " << ob2.multiply() << endl;
    cout << "Modulo: " << ob2.Modulo() << endl;
    return 0;
}