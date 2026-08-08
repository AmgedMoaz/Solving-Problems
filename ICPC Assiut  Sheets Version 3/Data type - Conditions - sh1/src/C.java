 // Simple Calculator

import java.util.Scanner;

public class C {
    static Scanner input = new Scanner(System.in);
    public static void main(String[] args) {

    long x , y;
    x = input.nextInt();
    y = input.nextInt();

    System.out.println(x + " + " + y + " = " + (x+y));
    System.out.println(x + " * " + y + " = " + (x*y));
    System.out.println(x + " - " + y + " = " + (x-y));

    }
}