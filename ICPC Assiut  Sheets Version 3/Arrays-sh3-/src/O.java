// Fibonacci

import java.util.Scanner;

public class O {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        short n = in.nextShort();
        if(n == 1) {
            System.out.println(0);
            return;
        }else if(n == 2) {
            System.out.println(1);
            return;
        }else {
            long a = 0 , b = 1 , c = 0;
            while(n > 2) {
                c = a+b;
                a = b;
                b = c;
                n--;
            }
            System.out.println(c);
        }
        in.close();

    }
}