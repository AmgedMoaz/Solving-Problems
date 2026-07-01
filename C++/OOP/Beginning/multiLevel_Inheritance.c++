// Code a program about multi level inheritance
#include <bits/stdc++.h>
using namespace std;
class Person {
  private:
  string name = "unknown";
  int age = 0;
  public:
  Person(string n , int a) 
  {
     name = n;
     age = a;
  }
  void print()
  {
     cout << "Name : " << name << endl;
     cout << "Age : " << age << endl;
  }
};
class Employee :  Person{
private:
int id = 0;
double salary = 0.0;
public:
Employee (string n , int a , int i , double s) : Person(n,a)
{
  id = i;
  salary = s;
}
void print()
{
 Person :: print();
  cout << "Id : " << id << "\n";
  cout << "Salary : " << salary << endl;
}
};
class Client : Employee {
private:
string clientName = "unknown";
long long phone = 0;
public:
Client(string n , int a , int i , double s , string c , long long p) : Employee(n , a , i , s)
{
   clientName = c;
   phone = p;
}
void print()
{
    Employee :: print();
    cout << "clientName : " << clientName << "\n";
    cout << "Phone : " << phone << "\n";
}
};
int main () 
{
  cout << "Hi"<< "\n";
  Person ob("Amged" , 21);
  ob.print();
  Employee ob1("Ahmed", 24 , 1 , 1000.50);
  ob1.print();
  Client ob2("Mohamed" , 14 , 2 , 800.20 , "Mohoamed_Moaz" , 201233537890 );
  ob2.print();
     return 0;
}