// Repression

import java.util.Scanner;

public class J {
    public static void main(String []argv) {

        Scanner in = new Scanner(System.in);

        int a = in.nextInt();
        int b = in.nextInt();
        int c = in.nextInt();

        if(a >= b && a >= c) {
            if(b >= c) {
                System.out.println(a+b);
            } else {
                System.out.println(a+c);
            }
        }else if(b >= a && b >= c) {
            if(a >= c) {
                System.out.println(b+a);
            } else {
                System.out.println(b+c);
            }
        } else {
            if(a >= b) {
                System.out.println(c+a);
            } else {
                System.out.println(c+b);
            }
        }
        in.close();

    }
}