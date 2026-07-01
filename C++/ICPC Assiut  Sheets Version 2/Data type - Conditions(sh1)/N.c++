// Char
#include <bits/stdc++.h>
using namespace std;
int main() {

   char ch;
   cin >> ch;
   (ch >= 'a' && ch <= 'z')? cout <<(char)toupper(ch)  << endl: (ch >= 'A' && ch <= 'Z')? cout <<(char)tolower(ch) << endl : cout << "Invalid input";

    return 0;
}