// Combination

import java.util.Scanner;

public class T {
    static long[][] memo = new long[31][31];
    public static void main(String[] argv) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        int r = in.nextInt();
        for (int i = 0; i <= 30; i++) {
            for (int j = 0; j <= 30; j++) {
                memo[i][j] = -1;
            }
        }

        System.out.println(nCr(n, r));
        in.close();
    }

    // دالة تعاودية لحساب nCr باستخدام مثلث باسكال
    static long nCr(int n, int r) {
        // Base cases
        if (r == 0 || r == n)
            return 1;
        if (r > n)
            return 0;

        // إذا تم حساب القيمة مسبقاً، قم بإرجاعها مباشرة
        if (memo[n][r] != -1)
            return memo[n][r];

        // Recursive case وحفظ النتيجة في الـ memo
        return memo[n][r] = nCr(n - 1, r - 1) + nCr(n - 1, r);
    }
}