// Code a program to reverse a Given String
#include <iostream>
#include <string>
using namespace std;
int main() { 
 string name = "w3resource";
    for (int i = name.length()-1 ; i >= 0 ; i--) {
        cout << name[i];
    }
    return 0;
}