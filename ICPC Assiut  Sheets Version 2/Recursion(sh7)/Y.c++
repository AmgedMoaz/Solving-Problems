// Number of Ways

#include <iostream>
using namespace std;

int countWays(int s , int e);

int main ()
{

// لسرعة الإدخال والإخراج في لغة C++
ios_base::sync_with_stdio(false);
cin.tie(NULL);
    
   int s , e;
   cin >> s >> e;

   cout << countWays(s,e) << "\n";

    return 0;
}
int countWays(int s , int e) {
    if(s == e)
        return 1;                                                     // base case
    
    if(s > e)
        return 0;                                                     // base case

    return countWays(s+1,e) + countWays(s+2,e) + countWays(s+3,e);    // recursive case
}