#include <iostream>
#include <string>
using namespace std;
int main()
{
    string scale, task, left, right;
    cin >> scale;
    int cross = scale.find('|'); // AC
    left = scale.substr(0, cross); // AC
    right = scale.substr(cross + 1); // '|'
    cin >> task; // DB
    for (auto pointer : task)
        if (left.size() <= right.size()) left += pointer;
        else right += pointer;
    cout << (left.size() == right.size() ? left + "|" + right : "Impossible") << endl;
    return 0;
}