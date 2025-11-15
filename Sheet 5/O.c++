#include <iostream>
#include <vector>
using namespace std;

// دالة لإيجاد أكبر رقم
int getMax(const vector<int>& A) {
    int maxVal = A[0];
    for (int num : A) {
        if (num > maxVal)
            maxVal = num;
    }
    return maxVal;
}

// دالة لإيجاد أصغر رقم
int getMin(const vector<int>& A) {
    int minVal = A[0];
    for (int num : A) {
        if (num < minVal)
            minVal = num;
    }
    return minVal;
}

// دالة لاختبار هل الرقم أولي
bool isPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0)
            return false;
    return true;
}

// دالة لحساب عدد الأعداد الأولية
int countPrimes(const vector<int>& A) {
    int count = 0;
    for (int num : A)
        if (isPrime(num))
            count++;
    return count;
}

// دالة لاختبار هل الرقم Palindrome
bool isPalindrome(int n) {
    int original = n, reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }
    return original == reversed;
}

// دالة لحساب عدد الأعداد التي هي Palindrome
int countPalindromes(const vector<int>& A) {
    int count = 0;
    for (int num : A)
        if (isPalindrome(num))
            count++;
    return count;
}

// دالة لحساب عدد القواسم (المقسومات) للرقم
int countDivisors(int n) {
    int count = 0;
    for (int i = 1; i <= n; i++)
        if (n % i == 0)
            count++;
    return count;
}

// دالة لإيجاد الرقم الذي لديه أكثر عدد من القواسم
int getMaxDivisorsNumber(const vector<int>& A) {
    int maxDivCount = 0;
    int result = 0;

    for (int num : A) {
        int divs = countDivisors(num);
        if (divs > maxDivCount) {
            maxDivCount = divs;
            result = num;
        } else if (divs == maxDivCount) {
            result = max(result, num);  // نأخذ الأكبر في حالة التساوي
        }
    }

    return result;
}

// الدالة الرئيسية
int main() {
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    cout << "The maximum number : " << getMax(A) << endl;
    cout << "The minimum number : " << getMin(A) << endl;
    cout << "The number of prime numbers : " << countPrimes(A) << endl;
    cout << "The number of palindrome numbers : " << countPalindromes(A) << endl;
    cout << "The number that has the maximum number of divisors : " << getMaxDivisorsNumber(A) << endl;

    return 0;
}