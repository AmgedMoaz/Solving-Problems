// I Wanna Be the Guy

#include <bits/stdc++.h>
using namespace std;

int main() {

    short n;
    cin >> n;
    
   set<int> levels;

    short p;
    cin >> p;
    for(int i = 0 ; i < p ; i++) {
        int level;
        cin >> level;
        levels.insert(level);
    }

    short q;
    cin >> q;
    for(int i = 0 ; i < q ; i++) {
        int level;
        cin >> level;
        levels.insert(level);
    }

    (levels.size() == n)? cout << "I become the guy." << endl : cout << "Oh, my keyboard!" << endl;

    return 0;
}