#include <bits/stdc++.h>
using namespace std;

class Person{
private:
   int age;
   string name;

public:
   void setData(int a, string n){
      age = a;
      name = n;
   }
   void display(){
      cout << "\n";
      cout << "Name: " << name << endl;
      cout << "Age: " << age << endl;
   }
};

int main ()
{
    Person ob1;
    Person ob2;
    Person ob3;
    ob1.setData(21, "Amged");
    ob1.display();
   
    ob2.setData(21,"Moaz");
    ob2.display();
   
    ob3.setData(21,"Ahmed");
    ob3.display();
    return 0;
}