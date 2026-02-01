#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std ;
int main ()
{
int Guessing ;
int Guess ;
int Answer ;
srand(time(0)) ;
Answer = rand()%20+1 ;
Guessing = 5 ;

cout << "               Welcome To Guessing Game            \n" ;
cout << "       I'm Thinking about Number between 1 : 20 , Guessing =5        \n" ;   

for ( int i = 1 ; i <= Guessing ; i++ )
{
cout << " Enter Your Guess " << i << " : "  ;
cin >> Guess ;

if ( Guess != Answer )
{
if ( Guess > Answer)
{
    cout << " You Enter a Higher Number " << endl ;
}
else 
{
  cout << " You Enter a Lower Number " << endl ;   
}
}
else 
{
cout << "    You're Right   " ;
break;
}

}
return 0 ;
}