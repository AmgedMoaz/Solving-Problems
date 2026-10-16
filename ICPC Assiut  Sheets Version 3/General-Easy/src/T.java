// Helpful Maths

import java.util.Scanner;
import java.util.Arrays;

public class T {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        String s = in.next();

        // تقسيم النص عند علامة الزائد (+) للحصول على الأرقام وحدها
        String[] parts = s.split("\\+");

        // ترتيب الأرقام تصاعدياً
        Arrays.sort(parts);

        // طباعة الأرقام مرتبة ومفصولة بـ +
        System.out.println(String.join("+", parts));
        in.close();
    }
}