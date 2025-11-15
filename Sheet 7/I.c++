#include <iostream>
using namespace std;
int Vowel(char C)
{
    return C == 'a' || C == 'e' || C == 'i' || C == 'o' || C == 'u' ||
           C == 'A' || C == 'E' || C == 'I' || C == 'O' || C == 'U' ;
}
int check(string Value,int Size)
{
    if (Size - 1 == 0)
    {
        return Vowel(Value[Size - 1]);
    }
    return Vowel(Value[Size - 1]) + check(Value,Size - 1);
}
int main ()
{
    
    string Name;
    getline(cin,Name);
    int Size;
    Size = Name.size();
    cout << check(Name,Size);

    return 0;
}