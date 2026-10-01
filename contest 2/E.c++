// Yara's Magical Crystals

#include <iostream>
using namespace std;

long long a[205][205];

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> a[i][j];

        long long best = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                long long sum = a[i][j];  // الخلية نفسها

                // فوق يمين
                for (int x = i - 1, y = j + 1; x >= 0 && y < m; x--, y++)
                    sum += a[x][y];

                // فوق شمال
                for (int x = i - 1, y = j - 1; x >= 0 && y >= 0; x--, y--)
                    sum += a[x][y];

                // تحت يمين
                for (int x = i + 1, y = j + 1; x < n && y < m; x++, y++)
                    sum += a[x][y];

                // تحت شمال
                for (int x = i + 1, y = j - 1; x < n && y >= 0; x++, y--)
                    sum += a[x][y];

                if (sum > best)
                    best = sum;
            }
        }

        cout << best << endl;
    }
    return 0;
}