#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
const int Size = 1000;
char A[Size][Size];
int visit[Size][Size];
vector<pair<pair<int,int>,int> > res;
int n , m;
void add(int row , int column ,int Moves)
{
    int colMov = column+Moves;
    int col = column;
    while(col <= colMov) {
        visit[row][col] = 1; // ✅
        col++;
    }
    colMov = column-Moves;
    col = column;
    while(col >= colMov) {
        visit[row][col] = 1; // ✅
        col--;
    }
    int rowMove = row+Moves;
    int ro = row;
    while(ro <= rowMove) {
        visit[ro][column] = 1; // ✅
        ro++;
    }
    rowMove = row-Moves; // ✅
    ro = row;
    while(ro >= rowMove) {
        visit[ro][column] = 1; // ✅
        ro--;
    }
}
int checkStarts(int row , int column)
{
    int right = 0 , left = 0 , up = 0 , down = 0;
    int col = column;
    while(col <= m && A[row][col] == '*') { // ✅
        right++;
        col++;
    }
    col = column;
    while(col >= 1 && A[row][col] == '*') { // ✅
        left++;
        col--;
    }
    int ro = row;
    while(ro >= 1 && A[ro][column] == '*') { // ✅
        up++;
        ro--;
    }
    ro = row;
    while(ro <= n && A[ro][column] == '*') { // ✅
        down++;
        ro++;
    }
    return min(min(right-1,left-1) , min(up-1,down-1));
}
int main()
{
  cin >> n >> m;
   for(int i = 1 ; i <= n ;i++)
    {
        for(int j = 1 ; j <= m ;j++)
         {
            A[i][j] = '.';
         }
    }
         for(int i = 1 ; i <= n ;i++)
         {
           for(int j = 1 ; j <= m ;j++)
            {
              cin >>A[i][j];
            }
         } 
            for(int i = 1 ; i <= n ;i++)
    {
        for(int j = 1 ; j <= m ;j++)
         {
            visit[i][j] = 0;
         }
    }
              for(int i = 1 ; i <= n ;i++)
              {
                for(int j = 1 ; j <= m ;j++)
                 {
                    if (A[i][j] == '*')
                    {
                     int start = checkStarts(i,j);
                      if (start > 0)
                       {
                        res.push_back({{i,j},start});
                        add(i,j,start);
                       }
                    }
                 }
               } 
                for(int i = 1 ; i <= n ;i++)
              {
                for(int j = 1 ; j <= m ;j++)
                 {
                    if (A[i][j] == '*')
                    {
                      if (visit[i][j] == 0)
                      {
                        cout << -1;
                        return 0;
                      } 
                    }
                 }
               } 
                cout << res.size() << endl;
                 for (int i = 0 ; i < res.size() ;i++)
                  {
                    cout << res[i].first.first << " " <<  res[i].first.second << " " <<  res[i].second << "\n";
                  }

    return 0;
}