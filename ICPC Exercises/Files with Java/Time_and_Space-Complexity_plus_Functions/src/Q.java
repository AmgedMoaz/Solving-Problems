// Base K

import java.util.Scanner;

public class Q {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        short k = in.nextShort();
        String aStr = in.next();
        String bStr = in.next();

        long a = Long.parseLong(aStr,k);
        long b = Long.parseLong(bStr,k);
        System.out.println(solve(a,b));
        in.close();
    }

    static long solve(long a , long b) {
        return a*b;
    }
}