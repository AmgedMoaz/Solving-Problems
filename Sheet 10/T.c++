#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    string base = "ROYGBIV";
    string extra = "GBIV";

    cout << base;
    n -= 7;

    int i = 0;
    while (n > 0) {
        cout << extra[i % 4];
        i++;
        n--;
    }

    return 0;
}