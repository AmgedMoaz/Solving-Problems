// Mirror Array

import java.util.Scanner;

public class W {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        short n = in.nextShort();
        short m = in.nextShort();

        int [][] arr = new int[n][m];
        for(int i = 0 ; i < n ; i++)
            for(int j = 0 ; j < m ; j++)
                arr[i][j] = in.nextInt();

        for(int i = 0 ; i < n ; i++) {
            for(int j = m-1 ; j >= 0 ; j--) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
        in.close();

    }
}