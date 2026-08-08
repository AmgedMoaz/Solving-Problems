 // Basic Data Types

import java.util.Scanner;

public class B {
    static Scanner input = new Scanner(System.in);
    public static void main(String[] args) {


        int n;
        n = input.nextInt();
        long x;
        x = input.nextLong();
        char ch;
        ch = input.next().charAt(0);
        float f;
        f = input.nextFloat();
        double m;
        m = input.nextDouble();

        System.out.println(n);
        System.out.println(x);
        System.out.println(ch);
        System.out.println(f);
        System.out.println(m);

    }
}