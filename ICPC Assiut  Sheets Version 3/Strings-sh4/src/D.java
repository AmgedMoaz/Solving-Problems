// Strings

import java.util.Scanner;

public class D {
    public static void main(String[] argv) {

        Scanner in = new Scanner(System.in);

        String a = in.next();
        String b = in.next();

        System.out.println(a.length() + " " + b.length());
        System.out.println(a + b);

        // 1. تحويل النصوص إلى مصفوفات أحرف
        char[] arrayA = a.toCharArray();
        char[] arrayB = b.toCharArray();

        // 2. إجابة التبديل (Swap)
        char temp = arrayA[0];
        arrayA[0] = arrayB[0];
        arrayB[0] = temp;

        // 3. إعادة تحويل المصفوفات إلى String
        a = new String(arrayA);
        b = new String(arrayB);

        System.out.println(a + " " + b);
        in.close();

    }
}