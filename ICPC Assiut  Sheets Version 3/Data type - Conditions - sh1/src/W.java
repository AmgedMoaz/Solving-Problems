// Mathematical Expression

import java.util.Scanner;

public class W {
    static Scanner input = new Scanner(System.in);
    public static void main(String[] args) {

        int a , b;
        char s , q;
        long c;
        a = input.nextInt();
        s = input.next() .charAt(0);
        b = input.nextInt();
        q = input.next().charAt(0);
        c = input.nextLong();

        if(s == '+') {
            if((a+b) == c) {
                System.out.println("Yes");
            }else {
                System.out.println((a+b));
            }
        }else if(s == '-') {
            if((a-b) == c) {
                System.out.println("Yes");
            }else {
                System.out.println((a-b));
            }
        }if(s == '*') {
            if((a*b) == c) {
                System.out.println("Yes");
            }else {
                System.out.println((a*b));
            }
        }

    }
}