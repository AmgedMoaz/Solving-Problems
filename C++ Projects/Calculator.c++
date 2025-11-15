#include <iostream> 
using namespace std ;
int main ()
{
// Declare The variable 

int x ;
int y ;
char operation ;


// Set The Variable 
 
cout << " Enter x : " ;
cin >> x ;
cout << " Ebter y : " ;
cin >> y ;

// Select The Operation  
cout << " Enter Your Operation  : " ;
cin >> operation ;
switch (operation)
{
case '+' :
    cout << x << "+" << y << "=" << x+y ;
    break;
case '-' :
    cout << x << "-" << y << "=" << x-y ;
    break;
case '*' :
    cout << x << "*" << y << "=" << x*y ;
    break;
case '/' :
    cout << x << "/" << y << "=" <<(float)x/y ;
    break;
case '%' :
    cout << x << "%" << y << "=" << x%y ;
    break;
default:
    break;
}
return 0 ;
}