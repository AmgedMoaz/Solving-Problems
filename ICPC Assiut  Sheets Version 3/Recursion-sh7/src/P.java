// Log2

import java.util.Scanner;

public class P {
    public static void main(String[] argv) {
        Scanner in = new Scanner(System.in);

        long n = in.nextLong();
        long result = getLog2(n);
        System.out.println(result);
        in.close();
    }

    static long getLog2(long num) {
        if (num <= 1)
            return 0;                         // base case

        return 1 + getLog2(num / 2);     // recursive case
    }
}