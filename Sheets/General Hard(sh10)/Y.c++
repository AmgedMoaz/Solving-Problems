#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    
    vector<vector<long long>> matrix(n, vector<long long>(m));
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }
    
    int top = 0, bottom = n - 1;
    int left = 0, right = m - 1;
    vector<long long> result;
    
    while(top <= bottom && left <= right) {
        // Left to right (top row)
        for(int i = left; i <= right; i++) {
            result.push_back(matrix[top][i]);
        }
        top++;
        
        // Top to bottom (right column)
        for(int i = top; i <= bottom; i++) {
            result.push_back(matrix[i][right]);
        }
        right--;
        
        // Right to left (bottom row) - if exists
        if(top <= bottom) {
            for(int i = right; i >= left; i--) {
                result.push_back(matrix[bottom][i]);
            }
            bottom--;
        }
        
        // Bottom to top (left column) - if exists
        if(left <= right) {
            for(int i = bottom; i >= top; i--) {
                result.push_back(matrix[i][left]);
            }
            left++;
        }
    }
    
    // Print result without extra space at the end
    for(int i = 0; i < result.size(); i++) {
        if(i > 0) cout << " ";
        cout << result[i];
    }
    cout << endl;
    
    return 0;
}