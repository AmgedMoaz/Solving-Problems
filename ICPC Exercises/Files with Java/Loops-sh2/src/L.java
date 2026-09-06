// Diagonal Difference

import java.util.Scanner;

public class L {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        int[][] arr = new int[n][n];

        int sum_primary = 0 , sum_secondary = 0;
        for(int i = 0 ; i < n ; i++) {
            for(int j = 0 ; j < n ; j++) {
                arr[i][j] = in.nextInt();
            }
        }
        for (int i = 0; i < n; i++) {
            sum_primary += arr[i][i];
            sum_secondary += arr[i][n - 1 - i];
        }

        System.out.println(Math.abs(sum_primary-sum_secondary));
        in.close();

    }
}