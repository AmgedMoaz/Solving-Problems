#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

long long Num(char c) {
    if (c >= '0' && c <= '9') return c - '0';
    if (c >= 'A' && c <= 'Z') return c - 'A' + 10;
    if (c >= 'a' && c <= 'z') return c - 'a' + 10;
    return 0; // fallback
}

char reNum(long long num) {
    if (num >= 0 && num <= 9) return num + '0';
    else return num + 'A' - 10;
}

long long toDec(char* value , long long base) {
    long long size = strlen(value);
    long long power = 1;
    long long Result = 0;
    for (int i = size - 1; i >= 0; i--) {
        Result += Num(value[i]) * power;
        power *= base;
    }
    return Result;
}

char* fromDec(char res[] , long long base , long long Number) {
    if (Number == 0) {
        res[0] = '0';
        res[1] = '\0';
        return res;
    }
    int index = 0;
    while (Number > 0) {
        res[index++] = reNum(Number % base);
        Number /= base;
    }
    res[index] = '\0';
    reverse(res, res + index);
    return res;
}

int main () {
    int ca;
    cin >> ca;
    if (ca == 1) {
        char arr[35] = {""};
        cin >> arr;
        long long base;
        cin >> base;
        cout << toDec(arr, base);
    }
    else {
        long long Number , base;
        cin >> Number >> base;
        char res[100];
        cout << fromDec(res, base, Number);
    }
    return 0;
}
