// Shape3

import java.util.Scanner;

public class W {
    public static void main(String[] argv) {

        Scanner in = new Scanner(System.in);

        short n = in.nextShort();
        for(int i = 1 ; i <= n ; i++) {
            for(int x = i ; x < n ; x++) {
                System.out.print(" ");
            }
            for(int x = (2*i)-1 ; x > 0 ; x--) {
                System.out.print("*");
            }
            System.out.println();
        }
        for(int i = n ; i > 0 ; i--) {
            for(int x = 0 ; x < n-i ; x++) {
                System.out.print(" ");
            }
            for(int x = (2*i)-1 ; x > 0 ; x--) {
                System.out.print("*");
            }
            System.out.println();
        }
        in.close();

    }
}