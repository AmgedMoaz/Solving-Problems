// I Love strings

import java.util.Scanner;

public class K {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int t = in.nextInt();
        while (t-- > 0) {
            String s = in.next();
            String n = in.next();

            // معرفة أقصى طول بين النصين
            int maxLength = Math.max(s.length(), n.length());

            for (int i = 0; i < maxLength; i++) {
                if (i < s.length()) {
                    System.out.print(s.charAt(i));
                }
                if (i < n.length()) {
                    System.out.print(n.charAt(i));
                }
            }
            System.out.println(); // سطر جديد بعد كل اختبار
        }
        in.close();

    }
}