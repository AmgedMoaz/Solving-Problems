// The maximum path-sum

import java.util.Scanner;

public class Y {
    static int n;
    static int m;
    static int[][] arr;
    public static void main(String[] argv) {
        Scanner in = new Scanner(System.in);

        n = in.nextInt();
        m = in.nextInt();
        arr = new int[10][10];
        for(int i = 0 ; i < n ; i++) {
            for(int j = 0 ; j < m ; j++)
                arr[i][j] = in.nextInt();
        }

        System.out.println(getSumPath(0,0));

        in.close();
    }
    static int getSumPath(int i , int j) {
        if(i == n-1 && j == m-1)
            return arr[i][j];          // base case

        if(i == n-1)
            return arr[i][j] + getSumPath(i,j+1);        // recursive case

        if(j == m-1)
            return arr[i][j] + getSumPath(i+1,j);        // recursive case

        int down = getSumPath(i+1,j);                    // recursive case
        int right = getSumPath(i,j+1);                   // recursive case
        return arr[i][j] + Math.max(down,right);
    }
}