#include <iostream>
using namespace std;

int main() {
    int X1, Y1, X2, Y2;
    cin >> X1 >> Y1 >> X2 >> Y2;

    int X3, Y3, X4, Y4;
    cin >> X3 >> Y3 >> X4 >> Y4;

    // Check for parallelism using cross multiplication
    if ((Y2 - Y1) * (X4 - X3) == (Y4 - Y3) * (X2 - X1)) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}