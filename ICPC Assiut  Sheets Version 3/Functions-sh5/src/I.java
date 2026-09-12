// Swapping With Matrix

import java.util.Scanner;

public class I {
    public static void main(String [] args) {

        Scanner in = new Scanner(System.in);

        short n = in.nextShort();
        short x = in.nextShort();
        short y = in.nextShort();
        x--;   y--;
        int [][] arr = new int[n][n];
        for(int i = 0 ; i < n ; i++)
            for(int j = 0 ; j < n ; j++)
                arr[i][j] = in.nextInt();

        swapMatrix(arr,n,x,y);
        in.close();

    }
    static void swapMatrix(int[][] arr , short size , short x , short y) {
        for(int i = 0 ; i < size ; i++) {
            int temp = arr[x][i];
            arr[x][i] = arr[y][i];
            arr[y][i] = temp;
        }
        for(int j = 0 ; j < size ; j++) {
            int temp = arr[j][x];
            arr[j][x] = arr[j][y];
            arr[j][y] = temp;
        }
        for(int i = 0 ; i < size ; i++){
            for(int j = 0 ; j < size ; j++)
                System.out.print(arr[i][j] + " ");

            System.out.println();
        }
    }
}