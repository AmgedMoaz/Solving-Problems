#include <iostream>
using namespace std ;
int main ()
{
   // Declare The Variable  
    
    int price1 , price2 , price3 ;
    string item1 , item2 , item3 ;
    int choice ;
    int count = 1;
    
  do{  
 
   // Show Menu 
cout << "  \n The Menu \n  " ;
cout << "\n 1 : Add Item \n " ;  
cout << "\n 2 : Display Items \n " ;  
cout << "\n 3 : Payment Items \n " ;  
cout << "\n 4 : Exit  \n " ;    

cout << "  \n Enter Your Choice : " ;
cin >> choice ;
// Choice Condition 

while (choice < 1 || choice > 4)
{
cout << " \n Sorry Your Choice " << choice << " is wrong \n " ;
cout << "\n  Enter Your Choice from option (1 - 4) : "  ;
cin >> choice ;
}

// Process 
   if ( choice == 1 )
{
if ( count > 3 )
{
cout << " Sorry You reached to the maximum attempts " ;
}
else 
{
    string name ;
    int price  ;
cout << "\n Enter item name : " ;
cin >> name ;
cout << " Enter item price : " ;
cin >> price ;
if (count == 1)
{
item1 = name ;
price1 = price ;
}
else if (count == 2)
{
item2 = name ;
price2 = price ;
}
else if (count == 3)
{
item3 = name ;
price3 = price ;
}

cout << " Added  " << name << " = $" << price << endl ;
count ++ ;
}
}
   else if ( choice == 2 )
{
cout << " \n Items in Cart \n " ;
double total = 0.0 ;

if ( count > 1 )
{
cout << item1 << " = $" << price1 << endl ;
total += price1 ;
}
if ( count > 2 )
{
cout << item2 << " = $" << price2 << endl ;
total += price2 ;
}
if ( count > 3 )
{
cout << item3 << " = $" << price3 << endl ;
total += price3 ;    
}
cout << " Total : " << total << endl ;
}
   else if ( choice == 3 )
{

double total = 0.0 ;

if ( count > 1 )
{
   total += price1 ;
}
if ( count > 2 )
{
  total += price2 ;  
}
if ( count > 3 )
{
 total += price3 ;    
}

double payment = 0.0 ;
cout << " Enter Payment : " ;
cin >> payment ;
if ( payment < total )
{
    cout << " Eror Payment , Your Payment must >= total \n ";
}
else 
{
double change = 0.0 ;

change = payment - total ;

  cout << " Total : $"<< total << endl ;
  cout << " Payment : $"<< payment  << endl ;   
  cout << " change : $"<< change  << endl ; 

}
}
   else if ( choice == 4 )
{
    cout << " \n  End of Services " ;
}

  }while(choice != 4 ) ;
return 0 ;
}