#include <iostream>
using namespace std;

int main() {
    long long n, k, a;
    cin >> n >> k >> a;
    
    // احسب حاصل ضرب n * k كـ long long لتجنب تجاوز السعة
    long long product = n * k;
    
    // تحقق إذا كانت القسمة ستؤدي إلى عدد عشري
    if (product % a != 0) {
        cout << "double";
    } else {
        long long result = product / a;
        if (result >= -2147483648 && result <= 2147483647) {
            cout << "int";
        } else {
            cout << "long long";
        }
    }
    
    return 0;
}