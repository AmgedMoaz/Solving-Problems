// Fibonacci

import java.util.Scanner;

public class P {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        if (!in.hasNextInt()) return;
        int n = in.nextInt();

        if (n <= 0) {
            in.close();
            return;
        }

        // Handle the first Fibonacci number if F_1 = 0
        if (n == 1) {
            System.out.println(0);
            in.close();
            return;
        }

        long a = 0, b = 1, c = 1;
        for (int i = 3; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }

        System.out.println(c);
        in.close();
    }
}