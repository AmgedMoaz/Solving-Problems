// Area of a Circle

#include<bits/stdc++.h>
using namespace std;

int main() {
    // لزيادة سرعة القراءة والكتابة
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double r;
    scanf("%lf", &r); // تم التعديل هنا
    double pi = 3.14159;

    double area = pi * r * r;
    printf("A=%.4f\n", area); // يفضل إضافة \n للسطر الجديد

    return 0;
}