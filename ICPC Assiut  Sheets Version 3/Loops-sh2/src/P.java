// Shape1

import java.util.Scanner;

public class P {
    public static void main(String []argv) {

        Scanner in = new Scanner(System.in);

        short n = in.nextShort();
        int i = n;
        while(i > 0) {
            for(int j = i ; j >= 1 ; j--) {
                System.out.print("*");
            }
            System.out.println();
            i--;
        }
        in.close();

    }
}