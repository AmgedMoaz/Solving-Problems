// Matrix

import java.util.Scanner;

public class G {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();

        int [][] arr = new int[n][n];
        for(int i = 0 ; i < n ; i++) {
            for(int j = 0 ; j < n ; j++) {
                arr[i][j] = in.nextInt();
            }
        }

        int sumPrimary = 0 , sumSecondary = 0;
        for(int i = 0 ; i < n ; i++) {
            sumPrimary += arr[i][i];
            sumSecondary += arr[i][n-i-1];
        }
        System.out.println(Math.abs(sumPrimary-sumSecondary));
        in.close();
    }
}