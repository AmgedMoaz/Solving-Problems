// Calculating Function

import java.util.Scanner;

public class D {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        long n = in.nextLong();
        System.out.println(solve(n));
        in.close();
    }
    static long solve(long num) {
        if(num%2 == 0) return (num/2);
        else return -(num/2+1);
    }
}