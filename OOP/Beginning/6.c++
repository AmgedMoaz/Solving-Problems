#include <bits/stdc++.h>
using namespace std;

class Animal {
public :
 void sound()
 {
  cout<<"Animal makes a sound"<<endl;
 }
};
class Dog : public Animal {
public :
void sound() {
     cout<<"Dog barks"<<endl;
 }
};
class Cat : public Animal {
public :
void sound() {
     cout<<"Cat meows"<<endl;
 }
} ;
int main ()
{
   Dog ob1;
   Cat ob2;
   ob1.sound();
   ob2.sound();
    return 0;
}