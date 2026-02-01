#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

bool can_pair(int a, int b) {
    // Align digits up to 3 places
    int len = 3;
    for (int i = 0; i < len; i++) {
        int digit_a = a % 10;
        int digit_b = b % 10;
        if (digit_a != 0 && digit_b != 0) {
            return false;
        }
        a /= 10;
        b /= 10;
    }
    return true;
}

bool valid_set(const vector<int>& subset) {
    for (size_t i = 0; i < subset.size(); i++) {
        for (size_t j = i + 1; j < subset.size(); j++) {
            if (!can_pair(subset[i], subset[j])) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int k;
    cin >> k;
    vector<int> d(k);
    for (int i = 0; i < k; i++) {
        cin >> d[i];
    }

    // Try largest possible set first (max size = 4)
    vector<int> best;
    // Check all subsets of sizes 4, 3, 2, 1
    vector<int> indices(k);
    for (int i = 0; i < k; i++) indices[i] = i;

    for (int size = 4; size >= 1; size--) {
        // Generate all combinations of indices of given size
        vector<bool> v(k);
        fill(v.begin(), v.begin() + size, true);
        do {
            vector<int> subset;
            for (int i = 0; i < k; i++) {
                if (v[i]) {
                    subset.push_back(d[i]);
                }
            }
            if (valid_set(subset)) {
                if (subset.size() > best.size()) {
                    best = subset;
                }
            }
        } while (prev_permutation(v.begin(), v.end()));
        if (!best.empty()) break; // Found largest valid set
    }

    // Output result
    cout << best.size() << endl;
    for (size_t i = 0; i < best.size(); i++) {
        cout << best[i] << " ";
    }
    cout << endl;

    return 0;
}