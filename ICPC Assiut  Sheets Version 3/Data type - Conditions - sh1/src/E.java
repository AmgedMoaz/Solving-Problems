 // Area of a Circle

import java.util.Scanner;

public class E {
    static Scanner input = new Scanner(System.in);
    public static void main(String[] args) {

        double r;
        double pi = 3.141592653;
        r = input.nextDouble();

        // Calculate area of circle
        double area = pi * r * r;

        System.out.printf("%.9f%n",area);

    }
}