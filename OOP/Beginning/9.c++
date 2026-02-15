#include <bits/stdc++.h>
using namespace std;

class Point {
private:
  int x , y;
public:
   Point () : x(0) , y(0) {}
   Point (int X, int Y) : x(X) , y(Y) {} 
   Point operator + (Point ob) {
    x += ob.x;
    y += ob.y;
    return Point(x, y);
   }
   bool operator == (Point ob) {
    return (x == ob.x && y == ob.y);
   }
   friend ostream& operator<<(ostream& out, const Point& p) {
    out << "(" << p.x << ", " << p.y << ")";
    return out;
}
};

int main () {
Point ob1(2,4);
Point ob2(3,5);
if (ob1 == ob2) {
    cout << "ob1 and ob2 are equal." << endl;
} else {
    cout << "ob1 and ob2 are not equal." << endl;
}
Point ob3 = ob1 + ob2;
cout << "Sum: " << ob3 << endl;
return 0;
}