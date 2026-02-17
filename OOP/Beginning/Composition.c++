#include <bits/stdc++.h>
using namespace std;

class Student {
private:
   string name;
   int grade;
public:
   void setName(string n)
   {
    name = n;
   }
   void setGrade(int g)
   {
     grade = g; 
   }
   string getName()
   {
    return  name;
   }
   int getGrade()
   {
     return grade; 
   }
  
};
class Course {
private:
  string courseName;
  Student ob;
public:
 void setcourseName(string c)
  {
     courseName = c;
  }
  void setStudent(string  name , int grade)
  {
        ob.setName(name);
        ob.setGrade(grade);
    }
  void display() 
  { 
     cout << "Name: " << ob.getName() << endl;
     cout << "Grade: " << ob.getGrade() << endl; 
     cout << "Course Name: " << courseName << endl; 
     cout << "\n\n";
  }
};
int main ()
{
   Student ob1 , ob3;
   ob1.setName("Amged");
   ob1.setGrade(92);
   ob3.setName("Ahmed");
   ob3.setGrade(91);
   Course ob2 , ob4;
   ob2.setcourseName("OOP");
   ob4.setcourseName("OOP");
   
   ob2.setStudent(ob1.getName(), ob1.getGrade());
   ob4.setStudent(ob3.getName(), ob3.getGrade());

   ob2.display();
   ob4.display();


    return 0;
}