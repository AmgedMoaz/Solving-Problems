// Find In Matrix

import java.util.Scanner;

public class E {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        int m = in.nextInt();

        int[][] arr = new int[n][m];
        for(int i = 0 ; i < n ; i++) {
            for(int j = 0 ; j < m ; j++) {
                arr[i][j] = in.nextInt();
            }
        }

        int x = in.nextInt();
        for(int i = 0 ; i < n ; i++) {
            for(int j = 0 ; j < m ; j++) {
                if(arr[i][j] == x) {
                    System.out.println("YES");
                    return;
                }
            }
        }
        System.out.println("NO");
        in.close();
    }
}