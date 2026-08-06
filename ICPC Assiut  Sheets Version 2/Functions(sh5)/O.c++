// Five in one
#include <bits/stdc++.h>
using namespace std;

int n;

// Function to get max item in array
int getMax(int arr[]);

// Function to get min item in array
int getMin(int arr[]);

// Function to show if item is prime or not
bool isPrime(int n);

// Function to get number of prime items
int countPrimes(int arr[]);

// Function to show is palindrome or not
bool isPalindrome(int n);

// Function to get numbers of palindrome items
int countPalindromes(int arr[]);

// Function to get numbers of divisors
int countDivisors(int n);

// Function to get max divisors
int getMaxDivisorsNumber(int arr[]);


int main()
{
    cin >> n;

     int arr[n];

      for (int i = 0; i < n; i++)
      {
          cin >> arr[i];
      }

       cout << "The maximum number : " << getMax(arr) << endl;
       cout << "The minimum number : " << getMin(arr) << endl;
       cout << "The number of prime numbers : " << countPrimes(arr) << endl;
       cout << "The number of palindrome numbers : " << countPalindromes(arr) << endl;
       cout << "The number that has the maximum number of divisors : "
          << getMaxDivisorsNumber(arr) << endl;

           return 0;
} 


// Function to get max item in array
int getMax(int arr[])
{
    int maxVal = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maxVal)
            maxVal = arr[i];
    }

    return maxVal;
}


// Function to get min item in array
int getMin(int arr[])
{
    int minVal = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < minVal)
            minVal = arr[i];
    }

    return minVal;
}


// Function to show if item is prime or not
bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }

    return true;
}


// Function to get number of prime items
int countPrimes(int arr[])
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (isPrime(arr[i]))
            count++;
    }

    return count;
}


// Function to show is palindrome or not
bool isPalindrome(int n)
{
    int original = n;
    int reversed = 0;

    while (n > 0)
    {
        reversed = reversed * 10 + (n % 10);
        n /= 10;
    }

    return original == reversed;
}


// Function to get numbers of palindrome items
int countPalindromes(int arr[])
{
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (isPalindrome(arr[i]))
            count++;
    }

    return count;
}


// Function to get numbers of divisors
int countDivisors(int n)
{
    int count = 0;

    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            count++;

            if (i != n / i)
                count++;
        }
    }

    return count;
}


// Function to get max divisors
int getMaxDivisorsNumber(int arr[])
{
    int maxDivCount = 0;
    int result = arr[0];

    for (int i = 0; i < n; i++)
    {
        int divs = countDivisors(arr[i]);

        if (divs > maxDivCount)
        {
            maxDivCount = divs;
            result = arr[i];
        }
        else if (divs == maxDivCount && arr[i] > result)
        {
            result = arr[i];
        }
    }

    return result;
}