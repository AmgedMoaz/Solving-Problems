// Search In Matrix

import java.util.Scanner;

public class S {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        short n = in.nextShort();
        short m = in.nextShort();
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
                    System.out.println("will not take number");
                    return;
                }
            }
        }
        System.out.println("will take number");
        in.close();

    }
}