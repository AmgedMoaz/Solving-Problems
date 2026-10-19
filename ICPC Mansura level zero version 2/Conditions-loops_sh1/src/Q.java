// Calculating Function

import java.util.Scanner;

public class Q {
    public static void main(String []args) {
        Scanner in = new Scanner(System.in);

        long n = in.nextLong();

        if(n%2 == 0) {
            n /= 2;
            System.out.println(n);
        }else {
            n /= 2;
            n++;
            System.out.println( (-1*n) );
        }
        in.close();;
    }
}