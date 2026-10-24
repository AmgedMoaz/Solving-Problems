// Most Similar Words

import java.util.Scanner;

public class X {

    // دالة لإزالة الأصفار من الرقم وتحويله مرة أخرى إلى رقم صحيح (long)
    public static long removeZeros(long num) {
        String s = Long.toString(num);
        String filtered = s.replace("0", "");
        return Long.parseLong(filtered);
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        long a = in.nextLong();
        long b = in.nextLong();
        long c = a + b;

        // إزالة الأصفار من a و b و c
        long aWithoutZeros = removeZeros(a);
        long bWithoutZeros = removeZeros(b);
        long cWithoutZeros = removeZeros(c);

        // التحقق مما إذا كانت المعادلة لا تزال صحيحة بعد إزالة الأصفار
        if (aWithoutZeros + bWithoutZeros == cWithoutZeros) {
            System.out.println("YES");
        } else {
            System.out.println("NO");
        }

        in.close();
    }
}