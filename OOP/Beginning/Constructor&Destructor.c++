#include <bits/stdc++.h>
using namespace std;

class Person {
private:
  int age;
  string name;

public:
  Person()
  {
    cout << "Hi,Everybody" << endl;
    int a = 0;
    string n = "Unknown";
  }

    Person(int a, string n)
    {
        age = a;
        name = n;
    }
    
    ~Person()
    {
        cout << "Bye,Everybody" << endl;
    }
    void show()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
int main ()
{
        Person p1;
        Person p2(21, "Amged");
        p2.show();
    return 0;
}