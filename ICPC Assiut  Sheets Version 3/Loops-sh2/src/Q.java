// Digits

import java.util.Scanner;

public class Q {
    public static void main(String[] argv) {

        Scanner in = new Scanner(System.in);

        int t = in.nextInt();
        while (t > 0) {
            int n = in.nextInt();

            // استخدام do-while لتغطية حالة n = 0 أيضاً
            do {
                System.out.print((n % 10) + " ");
                n /= 10;
            } while (n > 0);

            System.out.println();
            t--;
        }
        in.close();

    }
}