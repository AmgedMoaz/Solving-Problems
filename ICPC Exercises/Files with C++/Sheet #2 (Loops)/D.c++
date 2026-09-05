// Beautiful Matrix

#include <bits/stdc++.h>
using namespace std;

int main() {

int r = 0 , c = 0;
for(int i = 1 ; i <= 5 ; i++){
    for(int j = 1 ; j <= 5 ; j++){
        int x;
        cin >> x;
        if(x == 1){
            r = i;
            c = j;
        }
    }
}
int moves = 0;

// نمشي على الصفوف
while(r != 3){
    if(r < 3){
        r++;
    }else{
        r--;
    }
    moves++;
}

// نمشي على الاعمدة
while(c != 3){
    if(c < 3){
        c++;
    }else{
        c--;
    }
    moves++;
}
cout << moves << endl;

    return 0;
}