// Matrix

import java.util.Scanner;

public class T {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        short n = in.nextShort();
        int[][] arr = new int[n][n];
        for(int i = 0 ; i < n ; i++)
            for(int j = 0 ; j < n ; j++)
                arr[i][j] = in.nextInt();

        int sum_primary = 0 , sum_secondary = 0;
        for(int i = 0 ; i < n ; i++) {
            sum_secondary += arr[i][n-i-1];
            sum_primary += arr[i][i];
        }
        System.out.println(Math.abs(sum_primary-sum_secondary));
        in.close();

    }
}