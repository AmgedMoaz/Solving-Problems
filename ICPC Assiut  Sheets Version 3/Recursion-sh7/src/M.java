// Suffix Sum

import java.util.Scanner;

public class M {
    public static void main(String[] argv) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        int m = in.nextInt();
        int[] arr = new int[n];
        for(int i = 0; i < n; i++) {
            arr[i] = in.nextInt();
        }

        long result = suffixSum(arr, m, n - m);
        System.out.println(result);
        in.close();
    }

    static long suffixSum(int[] arr, int m, int index) {
        if (m == 0) {
            return 0;                                                   // base case
        }

        return arr[index] + suffixSum(arr, m - 1, index + 1);  // recursive case
    }
}