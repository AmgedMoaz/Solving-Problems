// Pyramid

import java.util.Scanner;

public class O {
    public static void main(String []argv) {

        Scanner in = new Scanner(System.in);

        short n = in.nextShort();

        for(int i = 1 ; i <= n ; i++) {
            for(int j = 1 ; j <= i ; j++ ) {
                System.out.print("*");
            }
            System.out.println();
        }
        in.close();

    }
}