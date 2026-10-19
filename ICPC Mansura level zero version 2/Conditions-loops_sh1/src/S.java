// Tricky Sum

import java.util.Scanner;

public class S {
    public static void main(String []args) {
        Scanner in = new Scanner(System.in);

        int t = in.nextInt();
        while(t-- > 0) {
            long n = in.nextLong();

            long sum = (n*(n+1))/2;
            long power_2 = 0;
            long p = 1;
            while(p <= n) {
                power_2 += p;
                p *= 2;
            }
            System.out.println( (sum-2*power_2) );
        }
        in.close();
    }
}