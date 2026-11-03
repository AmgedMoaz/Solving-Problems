// Weird Function1

#include <bits/stdc++.h>
using namespace std;

int weirdFunction1(int n) {
    int result = (2*n) + 3;
    int secondTerm = n * result;

    result = (2*result) + 3;

    result = (result * 2) + 3;

    result += 2 * (2*secondTerm + 3); 

    return result;
}

int main() {
    // لزيادة سرعة القراءة والكتابة
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int x;
    cin >> x;

    int result = weirdFunction1(x);
    cout << result << endl;

    return 0;
}