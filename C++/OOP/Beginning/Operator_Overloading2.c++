// Code a program to do posfix or prefix on objects
#include <bits/stdc++.h>
using namespace std;
class Exam {
   private: 
   int x = 0;
   public:
   Exam()
   {
      cout << "Enter x :";
      cin >> x;
   }
   void operator ++(int)
   {
       x++;
   }
    void print()
    {
       cout << "X : " << x << endl;
    }
    void operator ++()
    {
       ++x;
    }
};
int main ()
{
  Exam ob;
  ob++;
  ob.print();
  ++ob;
  ob.print();

    return 0;
}