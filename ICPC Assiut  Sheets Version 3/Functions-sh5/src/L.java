// New Array

import java.util.Scanner;

public class L {
    public static void main(String [] args) {

        Scanner in = new Scanner(System.in);

        int n = in.nextInt();

        int [] arr1 = new int[n];
        int arr2[] = new int[n];
        for(int i = 0 ; i < n ; i++)
            arr1[i] = in.nextInt();

        for(int i = 0 ; i < n ; i++)
            arr2[i] = in.nextInt();

        newArray(arr1,arr2,n);

        in.close();

    }
    static void newArray(int a[] , int[] b , int num) {
        int index = 0;
        int mixed[] = new int[2*num];
        for(int i = 0 ; i < num ; i++) {
            mixed[index] = b[i];
            index++;
        }
        for(int i = 0 ; i < num ; i++) {
            mixed[index] = a[i];
            index++;
        }
        for(int i = 0 ; i < 2*num ; i++)
            System.out.print(mixed[i] + " ");
    }
}