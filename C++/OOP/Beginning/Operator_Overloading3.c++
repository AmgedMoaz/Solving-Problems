// Code a program about Operator Overloading 
#include <bits/stdc++.h>
using namespace std;
class Exam {
  private:
    int x =0;
  public:
      Exam()
      {
        cout << "Enter X : ";
        cin >> x;
      }
      void operator +=(Exam ob)
      {
         x += ob.x;
      }
        void operator -=(Exam ob)
      {
         x -= ob.x;
      }
        void operator *=(Exam ob)
      {
         x *= ob.x;
      }
        void operator /=(Exam ob)
      {
         x /= ob.x;
      }
        void operator %=(Exam ob)
      {
         x %= ob.x;
      }
      void print()
      {
         cout << "Result : " << x << "\n";
      }
};
int main () 
{
  Exam ob1;
  Exam ob2;
//  ob1 += ob2;
//  ob1.print();
//  ob1 -= ob2;
//  ob1.print();
    ob1 *= ob2;
    ob1.print();
//  ob1 /= ob2;
//  ob1.print();
//  ob1 %= ob2;
//  ob1.print();



    return 0;
}