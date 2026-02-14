#include <bits/stdc++.h>
using namespace std;

class Animal {
public:
 virtual void sound() = 0;
    virtual ~Animal() {}
};

class Bird : public Animal {
public:
 void sound() override {
  cout << "Bird chirps" << endl;
 }
};
int main ()
{
    Animal* ob;
    ob = new Bird();
    ob->sound();
    delete ob;
    return 0;
}