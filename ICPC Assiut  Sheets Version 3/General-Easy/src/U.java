// Ilya and Bank Account

import java.util.Scanner;

public class U {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        long n = in.nextInt();

        if(n >= 0) {
            System.out.println(n);
            return;
        }else {
            long a = n/10;
            long b = (n/100) * 10 + (n%10);

            long maxOption = Math.max(a,b);
            System.out.println(maxOption);
        }
        in.close();
    }
}