// YES or YES?

import java.util.Scanner;

public class S {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        short t = in.nextShort();
        while (t > 0) {
            String s = in.next();

            // تحويل النص إلى حروف صغيرة ومقارنته بـ "yes"
            if (s.equalsIgnoreCase("yes")) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }

            t--;
        }
        in.close();

    }
}