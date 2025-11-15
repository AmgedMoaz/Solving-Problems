#include <iostream>
using namespace std;
long long result[1000005];

int main() {
    int T;
    cin >> T;
    long long counter = 0;
    
    for (int i = 0 ; i < T ; i++)
    {
     long long n , s;
     cin >> n >> s;
     
     if (n*(n+1)/2 < s)
     {
        cout << -1;
     }
     else 
     {
      long long sum = 0;
      for (int j = n ; j >= 1 ; j--)
       {
         if ( j+sum <= s)
         {
            sum += j;
            result[counter] = j;
            counter++;
         }
         if (sum == s)
         {
            break;
         }
        }
    }
    for (int k = 0 ; k < counter ; k++)
    {
        cout << result[k] << " ";
    }
    
    cout << endl;
    counter = 0;
    }

    return 0;
}