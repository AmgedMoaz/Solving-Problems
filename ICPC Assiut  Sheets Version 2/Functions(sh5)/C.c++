 // Wonderful Number
#include <bits/stdc++.h>
using namespace std;

// isPalindrome function
bool isPalindrome(string str);

// getBinary function
string getBinary(int N);

int main() {


    int n;
    cin >> n;

    if(n % 2) {  // it is mean that the number is odd  just like (n % 2 == 1)
        string binary = getBinary(n);
        if(isPalindrome(binary)) {
            cout << "YES";
        } else {
            cout << "NO";
        }

    }else {
        cout << "NO";
    }

    return 0;

}

//Definition of the isPalindrome function
bool isPalindrome(string Name)
{
 string rev = Name;
 reverse(rev.begin(),rev.end());
 return Name == rev;
}

// Definition of the getBinary function
string getBinary(int N) {
    string binary = "";
    while(N > 0) {
        if(N%2)
    {
        binary.push_back('1');
    }
    else 
    {
        binary.push_back('0');
    }
    N/=2;
    }
    return binary;
}