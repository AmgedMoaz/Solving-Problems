// Code a program to Display the operation of pre and post increment and decrement
#include <iostream> 
using namespace std;

int main() {
    int num = 57; 
    cout << "\n\n Display the operation of pre and post increment and decrement :\n"; 
    cout << "--------------------------------------------------------------------\n";  
    cout <<" The number is : " << num << endl;
    num++; // Post-incrementing 'num' by 1
    cout <<" After post increment by 1 the number is : " << num << endl; 
    ++num; // Pre-incrementing 'num' by 1
    cout <<" After pre increment by 1 the number is : " << num << endl; 
    num = num + 1; // Increasing 'num' by 1
    cout <<" After increasing by 1 the number is : " << num << endl; 
    num--; // Post-decrementing 'num' by 1
    cout <<" After post decrement by 1 the number is : " << num << endl; 
    --num; // Pre-decrementing 'num' by 1
    cout <<" After pre decrement by 1 the number is : " << num << endl;
    num = num - 1; // Decreasing 'num' by 1
    cout <<" After decreasing by 1 the number is : " << num << endl; 
    cout << endl;
    return 0;
} 