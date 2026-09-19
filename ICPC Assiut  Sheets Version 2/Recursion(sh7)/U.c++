// Knapsack

#include <bits/stdc++.h>
using namespace std;

int N, W;
int w[25], v[25];

int solve(int i, int remainingW)
{
    // خلصنا كل الـ items
    if (i == N)
        return 0;

    // الاختيار الأول: لا نأخذ الـ item
    int notTake = solve(i + 1, remainingW);

    // الاختيار الثاني: نأخذ الـ item
    int take = 0;

    if (w[i] <= remainingW)
    {
        take = v[i] + solve(i + 1, remainingW - w[i]);
    }

    // نختار القيمة الأكبر
    return max(take, notTake);
}

int main()
{

// لسرعة الإدخال والإخراج في لغة C++
ios_base::sync_with_stdio(false);
cin.tie(NULL);

    cin >> N >> W;

    for (int i = 0; i < N; i++)
    {
        cin >> w[i] >> v[i];
    }

    cout << solve(0, W) << '\n';

    return 0;
}