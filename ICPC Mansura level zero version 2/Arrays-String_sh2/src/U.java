// Be Fast 2

import java.util.Scanner;

public class U {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        long l = in.nextLong();
        long r = in.nextLong();
        long n = in.nextLong();

        // إجمالي عدد الأرقام في المدى
        long totalNumbers = (r - l + 1);

        // عدد الأرقام التي تقبل القسمة على n في المدى [l, r]
        long divisibleCount = (r / n) - ((l - 1) / n);

        // الأرقام التي لا تقبل القسمة
        long notDivisibleCount = totalNumbers - divisibleCount;

        System.out.println(notDivisibleCount);
        in.close();
    }
}