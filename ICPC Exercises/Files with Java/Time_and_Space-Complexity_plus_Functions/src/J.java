// Sum of Three Integers

import java.util.Scanner;

public class J {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int k = in.nextInt();
        int s = in.nextInt();
        System.out.println(solve(k,s));
        in.close();
    }
    static long solve(int k, int s) {
        long result = 0;
        for (int x = 0; x <= k; x++) {
            for (int y = 0; y <= k; y++) {
                int z = s - (x + y);
                if (z >= 0 && z <= k) {
                    result++;
                }
            }
        }
        return result;
    }
}