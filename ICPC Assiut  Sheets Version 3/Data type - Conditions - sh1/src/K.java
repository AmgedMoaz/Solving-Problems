 // Max and Min

import java.util.Scanner;

public class K {
    static Scanner input = new Scanner(System.in);
    public static void main(String[] args) {

        int a , b , c;
        a = input.nextInt();
        b = input.nextInt();
        c = input.nextInt();

        if(a >= b && a >= c) {
            if(b >= c) {
                System.out.print(c + " ");
            }else {
                System.out.print(b + " ");
            }
            System.out.println(a);
        }else if(b >= a && b >= c) {
            if(a >= c) {
                System.out.print(c + " ");
            }else {
                System.out.print(a + " ");
            }
            System.out.println(b);
        }else if(c >= a && c >= b) {
            if(a >= b) {
                System.out.print(b + " ");
            }else {
                System.out.print(a + " ");
            }
            System.out.println(c);
        }

    }
}