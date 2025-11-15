#include <iostream>
using namespace std;

int N, W;
int w[25], v[25];

int knapsack(int i, int cap) {
    // لو خلصنا العناصر أو السعة = 0
    if (i == N || cap == 0)
        return 0;

    // تجاهل العنصر الحالي
    int res = knapsack(i + 1, cap);

    // لو ممكن ناخد العنصر
    if (w[i] <= cap) {
        res = max(res, v[i] + knapsack(i + 1, cap - w[i]));
    }

    return res;
}

int main() {
    cin >> N >> W;
    for (int i = 0; i < N; i++)
        cin >> w[i] >> v[i];

    cout << knapsack(0, W) << endl;
    return 0;
}