// Shampoo

import java.util.Scanner;

public class R {
    public static void main(String []args) {
        Scanner in = new Scanner(System.in);

        int v = in.nextInt();
        int a = in.nextInt();
        int b = in.nextInt();
        int c = in.nextInt();

        while(true) {
            if(v < a) {
                System.out.println("F");
                break;
            }
            v -= a;

            if(v < b) {
                System.out.println("M");
                break;
            }
            v -= b;

            if(v < c) {
                System.out.println("T");
                break;
            }
            v -= c;
        }
        in.close();
    }
}