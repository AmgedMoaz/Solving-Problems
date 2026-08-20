// Count Vowels

#include <bits/stdc++.h>
using namespace std;

int counter = 0 , index = 0;

// Function to get the number of vowels
int count(string  n);

int main ()
{
   
    string phrase;
    getline(cin,phrase);

     cout << count(phrase);
    
    return 0;
}

// Definition the count function
int count(string phrase) {
    if(index == phrase.size()) {
        return counter;                                    // base case
    }

    if(phrase[index] == 'A' || phrase[index] == 'a' ||
       phrase[index] == 'E' || phrase[index] == 'e' ||
       phrase[index] == 'I' || phrase[index] == 'i' ||
       phrase[index] == 'O' || phrase[index] == 'o' ||
       phrase[index] == 'U' || phrase[index] == 'u') {
        counter++;
    }

    index++;
    return count(phrase);                                    // recursive case
}