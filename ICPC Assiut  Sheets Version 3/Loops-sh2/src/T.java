// Shape2

import java.util.Scanner;

public class T {
    public static void main(String[] argv) {

        Scanner in = new Scanner(System.in);

        short n = in.nextShort();
        for(int i = 1 ; i <= n ; i++) {
            for(int x = i ; x < n ; x++) {
                System.out.print(" ");
            }
            for(int x = (i*2)-1 ; x > 0 ; x--) {
                System.out.print("*");
            }
            System.out.println();
        }
        in.close();

    }
}