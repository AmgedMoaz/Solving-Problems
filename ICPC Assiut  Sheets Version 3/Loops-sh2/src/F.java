// Multiplication table

import java.util.Scanner;

public class F {
    public static void main(String []argv) {

        Scanner in = new Scanner(System.in);

        short n = in.nextShort();
        for(int i = 1 ; i <= 12 ; i++) {
            System.out.println(n + " * " + i + " = " + n*i);
        }
        in.close();

    }
}