// The last 2 digits

import java.util.Scanner;

public class Y {
    static Scanner input = new Scanner(System.in);
    public static void main(String[] args) {

        int a, b, c, d;
        a = input.nextInt();
        b = input.nextInt();
        c = input.nextInt();
        d = input.nextInt();

        // Mechanism to not overflow
        long result = a;
        result = (result * b) % 100;
        result = (result * c) % 100;
        result = (result * d) % 100;

        System.out.printf("%02d", result);

    }
}