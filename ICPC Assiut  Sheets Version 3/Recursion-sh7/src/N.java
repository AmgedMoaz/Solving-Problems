// Sum of a Matrix

import java.util.Scanner;

public class N {
    static int r , c;
    static int arr1[][];
    static int arr2[][];

    public static void main(String[] argv) {
        Scanner in = new Scanner(System.in);

        r = in.nextInt();
        c = in.nextInt();

        arr1 = new int[r][c];
        arr2 = new int[r][c];
        for(int i = 0 ; i < r ; i++)
            for(int j = 0 ; j < c ; j++)
                arr1[i][j] = in.nextInt();
        for(int i = 0 ; i < r ; i++)
            for(int j = 0 ; j < c ; j++)
                arr2[i][j] = in.nextInt();

        sumMatrix(0,0);

        in.close();
    }
    static void sumMatrix(int i , int j) {
        if(i == r)
            return;                                                 // base case

        if(j == c) {
            System.out.println();
            sumMatrix(i+1 , 0 );                                // recursive case
        }else {
            System.out.print( (arr1[i][j] + arr2[i][j]) + " ");
            sumMatrix(i,j+1);                                     // recursive case
        }
    }
}