 // Digits Summation

import java.util.Scanner;

public class F {
    static Scanner input = new Scanner(System.in);
    public static void main(String[] args) {

        long n , m;
        n = input.nextLong();
        m = input.nextLong();

        // Calculate the digit of two numbers
        n %= 10;
        m %= 10;

        System.out.println((n+m));

    }
}