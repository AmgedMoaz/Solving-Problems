// Sort Numbers

import java.util.Scanner;

public class T {
    static Scanner input = new Scanner(System.in);
    public static void main(String[] args) {

        long a , b , c;
        a = input.nextLong();
        b = input.nextLong();
        c = input.nextLong();

        if(a <= b && a <= c) {
            System.out.println(a);
            if(b <= c) {
                System.out.println(b);
                System.out.println(c);
            }else {
                System.out.println(c);
                System.out.println(b);
            }
        }else if(b <= a && b <= c) {
            System.out.println(b);
            if(a <= c) {
                System.out.println(a);
                System.out.println(c);
            }else {
                System.out.println(c);
                System.out.println(a);
            }
        }else if(c <= a && c <= b) {
            System.out.println(c);
            if(b <= a) {
                System.out.println(b);
                System.out.println(a);
            }else {
                System.out.println(a);
                System.out.println(b);
            }
        }

        System.out.println("\n" + a + "\n" + b + "\n" + c);

    }
}