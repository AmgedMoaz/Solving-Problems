// Calculator
#include <bits/stdc++.h>
using namespace std;
int main() {

 int A , B;
 char S;
 cin >> A >> S >> B;
 (S == '+')? cout << A + B << endl: (S == '-')? cout << A - B << endl: (S == '*')? cout << A * B << endl:(S == '/')? cout << A / B << endl : cout << "Invalid input" << endl;

    return 0;
}