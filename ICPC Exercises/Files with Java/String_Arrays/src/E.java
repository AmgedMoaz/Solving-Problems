// Strange Partition

import java.util.Scanner;

public class E {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int t = in.nextInt();
        while (t-- > 0) {
            int n = in.nextInt();
            long x = in.nextLong();
            long sum = 0, maxB = 0;
            for (int i = 0; i < n; i++) {
                long a = in.nextLong();
                sum += a;
                maxB += (a + x - 1) / x;
            }
            long minB = (sum + x - 1) / x;
            System.out.println(minB + " " + maxB);
        }
        in.close();

    }
}