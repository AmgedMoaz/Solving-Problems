// ATM Project c++  

#include <iostream>
using namespace std ;
void show ()
{
cout <<endl << endl << "           The Menu            " << "\n \n" ;
cout << " 1 : Balance "<< endl ;                
cout << " 2 : Withdraw "<< endl ; 
cout << " 3 : Deposit "<< endl ; 
cout << " 4 : Exit "<< endl ; 
}

void process ()
{
  // Declare The Variable 

float Balance = 1000 ;
int Withdraw = 0 ;
int Deposit = 0 ;
int Exit ;
int Choice = 0 ;
int password = 1204 ;
       // Verfing Password  
cout << " Enter Your Password "<< endl ;
cin >> password ;


do{
if (password == 1204 )
{ 

    cout << " \n  \n " ;
    show () ;
    cout << "\n \n" ;
cout << "Enter Your Choice : " ;
cin >> Choice ;  

switch (Choice)
{
case 1 :
cout << " Your Balance : "<< Balance << "\n" ;
    break;
case 2 : 
cout << " Your  Instant Balance : "<< Balance << "\n" ;
cout << " The Amount You Want to Withdraw  : " ;
cin >> Withdraw ;
if (Withdraw > Balance)
{
cout << " Sorry You Can't Withdraw This Amount " ;
}
else 
{
    Balance -=Withdraw ;
cout << "Your Current Balance : " << Balance ;
}
        break;
case 3 : 
cout << "Your Balance : " << Balance << endl  ;
cout << " Enter The Amount You want to Deposit : " ;
cin >> Deposit ;
Balance += Deposit ;
cout << " Current Balance : " << Balance ;
    break;
case 4 : 
cout << " Thank You " ;
    break;
default:
    break;

}
}
else
{
    string option ;
cout << " Sorry The Password You Entered Isn't Correct , If You Want To Enter again Enter yes , If You Won't Enter no "<< "\n" ;
cout << " Enter Your Option  : " ;
cin >> option ;
if (option == "yes")
{
    cout << " Enter Your Password "<< endl ;
    cin >> password ;
}
else 
{
    Choice  = 5 ;
}
}

}while (Choice<5) ;
}

int main ()
{

    // Function To Show Menu  &   Function Process

process () ;
return 0 ;
}