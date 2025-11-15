#include <iostream>
using namespace std;
int main ()
{
   int N;
   cin >> N;

   int count[26];
    for(int i = 0 ; i < 26 ; i++)
    {
        count[i]= 0;
    }

   for (int i = 0 ; i < N ; i++)
   {
    char letter;
    cin >> letter;
    count[letter-'a']++;
   }

   for (int i = 0 ; i < 26 ; i++)
   {
    char letter = i + 'a';
    while (count[i] > 0)
    {
        cout << letter;
        count[i]--;
    }
    
   }

    return 0;
}