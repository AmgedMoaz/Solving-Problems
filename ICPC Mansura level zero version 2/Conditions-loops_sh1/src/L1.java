// Summation from 1 to N

import java.util.Scanner;

public class L1 {
    public static void main(String []args) {
        Scanner in = new Scanner(System.in);

        long n = in.nextLong();

        long sum = (n*(n+1))/2;
        System.out.println(sum);
        in.close();;
    }
}