#include <iostream>
#include <vector>
using namespace std;

void getShiftZero(int N, vector<int>& Array)
{
    int insertPos = 0;

    // أولاً: ضع كل العناصر غير الصفرية في بداية المصفوفة بترتيبها
    for (int i = 0; i < N; i++)
    {
        if (Array[i] != 0)
        {
            Array[insertPos] = Array[i];
            insertPos++;
        }
    }

    // ثانياً: املأ ما تبقى من المصفوفة بالأصفار
    while (insertPos < N)
    {
        Array[insertPos] = 0;
        insertPos++;
    }

    // طباعة النتيجة
    for (int i = 0; i < N; i++)
    {
        cout << Array[i] << " ";
    }
}

int main()
{
    int N;
    cin >> N;

    vector<int> Array;
    for (int i = 0; i < N; i++)
    {
        int x;
        cin >> x;
        Array.push_back(x);
    }

    getShiftZero(N, Array);

    return 0;
}