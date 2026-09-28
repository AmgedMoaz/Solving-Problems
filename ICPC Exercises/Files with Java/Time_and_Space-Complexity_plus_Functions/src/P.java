// log2(N)

import java.util.Scanner;

public class P {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        long n = in.nextLong();
        System.out.println(solve(n));
        in.close();
    }

    static long solve(long num) {
        long counter = 0;
        // بنتاكد إن الخطوة الجاية مش هتعدي الـ N ومش هيحصل overflow للـ times
        while (num >= 2) {
            num /= 2;
            counter++;
        }
        return counter;
    }
}