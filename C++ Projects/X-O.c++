#include <iostream>
using namespace std ;
char Matrix[3][3]={ '1' , '2' , '3' , '4' , '5', '6' , '7' , '8' , '9' } ;
char player = 'X';
void show ()
{
    system("cls") ;
cout <<" -----------------\n" ;
for ( int r=0 ; r<3 ; r++ )
{
cout << "|  "  ;
for ( int c=0 ; c<3 ; c++ )
{
    cout << " " << Matrix[r][c] << "   "  ;
}
cout <<"|\n" ;
}
cout << " -----------------\n" ;

}
void replace ()
{
char position ;
    cout << " Enter Your Position      Player ("<<player<<") : " ;
cin >> position ;

for ( int r=0 ; r<3 ; r++ )
{
for ( int c=0 ; c<3 ; c++ )
{
if ( Matrix[r][c] == position )
{
 Matrix[r][c] = player ;   
}
}
}
if ( player == 'X')
{
    player = 'O' ;
}
else 
{
   player = 'X' ;
}
}
char checkWinner ()
{
int x = 0 , o = 0 , counter = 0 ;

// Rows 

for ( int r = 0 ; r<3 ; r++ )
{
for ( int c = 0 ; c<3 ; c++ )
{
    if ( Matrix[r][c] == 'X' )
    {
        x++ ;
    }
    else if (Matrix[r][c] == 'O' )
    {
        o++ ;
    }
if ( x == 3 )
{
    return 'X' ;
}
if ( o == 3 )
{
     return 'O' ;
}
}
x = 0 , o = 0 ;
}

// Columns 

for ( int c = 0 ; c<3 ; c++ )
{
for ( int r = 0 ; r<3 ; r++ )
{
    if ( Matrix[r][c] == 'X' )
    {
        x++ ;
    }
    else if (Matrix[r][c] == 'O' )
    {
        o++ ;
    }
if ( x == 3 )
{
    return 'X' ;
}
if ( o == 3 )
{
     return 'O' ;
}
}
x = 0 , o = 0 ;
}

//  Scissors

if ( Matrix[0][0] == 'X' && Matrix[1][1] == 'X' && Matrix[2][2] == 'X' )
{
return 'X' ;
}
if ( Matrix[0][2] == 'X' && Matrix[1][1] == 'X' && Matrix[2][0] == 'X' )
{
return 'X' ;
}
if ( Matrix[0][0] == 'O' && Matrix[1][1] == 'O' && Matrix[2][2] == 'O' )
{
return 'O' ;
}
if ( Matrix[0][2] == 'O' && Matrix[1][1] == 'O' && Matrix[2][0] == 'O' )
{
return 'O' ;
}

// Equality 

for ( int r = 0 ; r<3 ; r++ )
{
for ( int c = 0 ; c<3 ; c++ )
{
    if ( Matrix[r][c] != 'X' && Matrix[r][c] != 'O' )
    counter ++ ;
}
}
if ( counter == 0  )
{
    return '=' ;
}

return '1' ;
}
int main ()
{
    
while ( checkWinner() == '1' ) 
 {
        show () ;
        replace () ;
    checkWinner () ; 
 }
    show () ;

    if (checkWinner() == 'X')
    {
        cout << "\n The Player X is Winner " ; 
    }
   if (checkWinner() == 'O')
    {
       cout << "\n The Player O is Winner " ; 
    }
   if (checkWinner() == '=')
    {
       cout << "\n No Winner " ; 
    }
  return 0 ;
}