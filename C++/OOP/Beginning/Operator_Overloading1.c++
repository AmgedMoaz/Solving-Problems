// Code a program about three method to get sum of two objects
#include <bits/stdc++.h>
using namespace std;
class Exam {
    private:
    int x = 0;
    public:
    Exam()
    {
        cout << "Enter X " << endl;
        cin >> x;
    }
  /*  int getSum(Exam ob1 , Exam ob2)
    {
        cout << "Sum : "  << ob1.x + ob2.x;
    }*/

  /* int getSum(Exam ob)
    {
       cout <<"Sum : " << x + ob.x;
    }*/
 
    void operator +(Exam ob)
    {

      cout <<"The Sum : " << x + ob.x;
    }
  

};
int main () {
 Exam ob1;
 Exam ob2;
// ob1.getSum(ob1,ob2);
// ob1.getSum(ob2);
ob1 + ob2;
    return 0;
}