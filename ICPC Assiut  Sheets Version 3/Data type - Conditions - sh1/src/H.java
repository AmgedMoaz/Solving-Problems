 // Two numbers

import java.util.Scanner;

public class H {
    static Scanner input = new Scanner(System.in);
    public static void main(String[] args) {

        double a , b;
        a = input.nextDouble();
        b = input.nextDouble();

        double result = (a / b);

        System.out.println("floor " + (int) a + " / " + (int) b + " = " + (long) Math.floor(result));
        System.out.println("ceil " + (int) a + " / " + (int) b + " = " + (long) Math.ceil(result));
        System.out.println("round " + (int) a + " / " + (int) b + " = " + Math.round(result));

    }
}