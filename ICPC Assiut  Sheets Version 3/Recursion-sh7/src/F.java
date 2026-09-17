// Print Even Indices

import java.util.Scanner;

public class F {
    public static void main(String [] argv) {
        Scanner in = new Scanner(System.in);

        short n = in.nextShort();
        int[] arr = new int[n];
        for(int i = 0 ; i < n ; i++)
            arr[i] = in.nextInt();

        printEvenIndices(arr,n);
        in.close();
    }
    static void printEvenIndices(int arr[] , int num) {
        if(num < 0)
            return;                            // base case

        num--;
        if(num%2 == 0){
            System.out.print(arr[num]);
            if(num != 0)
                System.out.print(" ");
        }
        printEvenIndices(arr,num);             // recursive case
    }
}