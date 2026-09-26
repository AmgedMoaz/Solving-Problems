// Tricky Sum

import java.util.Scanner;

public class B {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        short t = in.nextShort();
        while(t-- > 0) {
            long n = in.nextLong();
            System.out.println(solve(n));
        }
        in.close();
    }
    static long solve(long num) {
        long tot_sum = num*(num+1)/2;
        long powers_sum = 0;
        long p = 1;
        while(p <= num) {
            powers_sum += p;
            if(num/2 < p)    break;
            p *= 2;
        }
        return (tot_sum - 2*(powers_sum));
    }
}