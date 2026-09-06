// Snails

import java.util.Scanner;

public class G {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        short t = in.nextShort();

        while(t > 0) {
            int n = in.nextInt();
            int a = in.nextInt();
            int b = in.nextInt();

            if(n <= a) {
                System.out.println(1);
                t--;
                continue; // تمنع الانتقال لطباعة days
            } else if(a <= b) {
                System.out.println(-1);
                t--;
                continue; // تمنع الانتقال لطباعة days
            }

            int days = 0;
            while(n > 0) {
                n -= a;
                days++;
                if(n <= 0) {
                    break;
                }
                n += b;
            }

            System.out.println(days);
            t--;
        }
        in.close();

    }
}