#include <bits/stdc++.h>
using namespace std;

class Person {

private:
   int age;
   string name;

public:
  void setAge(int a)
   {
     if (a < 0 )
       {
            cout << "Age must be greater than 0" << endl;
            age = 0;
       }
     else {
        age = a;
     }
   }  
   void setName(string n)
   {
     name = n;
   }
   int getAge()
   {
        return age;
   }
    string getName()
    {
          return name;
    }
};
int main ()
{
    Person ob1;
    ob1.setAge(5);
    ob1.setName("Moaz");
    cout << "Name: " << ob1.getName() << endl;
    cout << "Age: " << ob1.getAge() << endl;
    return 0;

}