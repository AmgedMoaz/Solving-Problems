// Project of c++ about Digital Clock 

#include <iostream>
#include <windows.h>
using namespace std ;
int main ()
{
    // Declare The Variable 

    int hour ;
    int minute ;
    int second ;


    // Set values to Hour & Minate & Second 

cout << " Hour : " ;
cin >> hour ;
cout << " Minate : " ;
cin >> minute ; 
cout << " Second : " ;
cin >> second ; 


    // Show the process 

while (true)
{
    system("cls") ;
    if (second > 59)
    {
        minute ++ ;
        second = 0 ;
    }
    if (minute > 59 )
    {
   hour ++ ;
   minute = 0 ;
    }
    if (hour > 23 )
    {
        hour = 0 ;
    }
    
    // Find the output 
    
    cout << "                                                            Digi12tal Clock               " << endl << endl << endl ;
    
    cout <<"                                                               " << hour << ":"<<minute << ":" << second  << endl ;
    second ++ ;
    Sleep(900) ;
}
 return 0 ;
}