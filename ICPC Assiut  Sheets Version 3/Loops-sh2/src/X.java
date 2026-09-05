// Convert To Decimal 2

import java.util.Scanner;

public class X {
    public static void main(String[] argv) {

        Scanner in = new Scanner(System.in);

        short t = in.nextShort();
        int binary = 0 , convert = 0;
        while(t > 0) {
            int n = in.nextInt();
            while(n > 0) {
                binary += (n%2);
                n /= 2;
            }
            for(double i = 0.0 ; i < binary ; i++) {
                convert += (Math.pow(2.0,i));
            }
            System.out.println(convert);
            binary = 0 ;  convert = 0;
            t--;
        }
        in.close();

    }
}