#include <bits/stdc++.h>
using namespace std;

class Animal {
public :
  virtual void sound()
 {
  cout<<"Animal makes a sound"<<endl;
 }
 virtual ~Animal() {}
};
class Dog : public Animal {
public :
void sound() override{
     cout<<"Dog barks"<<endl;
 }
};
class Cat : public Animal {
public :
void sound() override{
     cout<<"Cat meows"<<endl;
 }
} ;
int main ()
{
    vector<Animal*> animals;
    animals.push_back(new Dog());
    animals.push_back(new Cat());

    for(Animal* a : animals)
    {
        a->sound();
    }
  
    for(Animal* a : animals)
    {
        delete a;
    }
    return 0;
}