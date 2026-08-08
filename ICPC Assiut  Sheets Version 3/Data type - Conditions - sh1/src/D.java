 // Difference

import java.util.Scanner;

public class D {
    static Scanner input = new Scanner(System.in);
    public static void main(String[] args) {

        Long a , b , c ,d;
        a = input.nextLong();
        b = input.nextLong();
        c = input.nextLong();
        d = input.nextLong();

        System.out.println("Difference = " + ((a*b) - (c*d)));

    }
}