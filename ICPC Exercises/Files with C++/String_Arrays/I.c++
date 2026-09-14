// President's Office

#include <bits/stdc++.h>
using namespace std;

int main() {

    short n , m;
    cin >> n >> m;

    char c;
    cin >> c;

    vector<string> grid(n); 
    for(int i = 0 ; i < n ; i++) {
        cin >> grid[i];
    }

    set<char> deputies;

    int dx[4] = {-1,1,0,0}; 
    int dy[4] = {0,0,-1,1};

    for(int i = 0 ; i < n ; i++) {
        for(int j = 0 ; j < m ; j++) {
            if(grid[i][j] == c) {
                for(int k = 0 ; k < 4 ; k++) {
                    int ni = i + dx[k];
                    int nj = j + dy[k];

                     // التأكد أن الخلية داخل المصفوفة
                    if (ni >= 0 && ni < n && nj >= 0 && nj < m) {

                        char neighbor = grid[ni][nj];

                        // ليست فارغة وليست مكتب الرئيس
                        if (neighbor != '.' && neighbor != c) {
                            deputies.insert(neighbor);
                        }
                    }
                }
            }
        }
    }
    cout << deputies.size() << endl;

    return 0;
}