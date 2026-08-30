#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<char> nums;

    // استخراج الأرقام فقط
    for (char c : s) {
        if (c != '+')
            nums.push_back(c);
    }

    // ترتيب الأرقام
    sort(nums.begin(), nums.end());

    // طباعة النتيجة
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i];
        if (i != nums.size() - 1)
            cout << "+";
    }

    return 0;
}