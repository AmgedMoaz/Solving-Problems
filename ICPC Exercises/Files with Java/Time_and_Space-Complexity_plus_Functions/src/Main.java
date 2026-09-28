// Elections

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int t = in.nextInt();
        while(t-- > 0) {
            long a = in.nextLong();
            long b = in.nextLong();
            long c = in.nextLong();
            solve(a, b, c);
        }
        in.close();
    }

    static void solve(long x, long y, long z) {
        long max = Math.max(x, Math.max(y, z));

        long ansA = (x > Math.max(y, z)) ? 0 : max - x + 1;
        long ansB = (y > Math.max(x, z)) ? 0 : max - y + 1;
        long ansC = (z > Math.max(x, y)) ? 0 : max - z + 1;

        System.out.println(ansA + " " + ansB + " " + ansC);
    }
}