// Left Max

import java.util.Scanner;

public class Z {
    static int maxValue;
    public static void main(String[] argv) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        int [] arr = new int[n];
        for(int i = 0 ; i < n ; i++)
            arr[i] = in.nextInt();

        maxValue = arr[0];
        System.out.print(arr[0] + " ");
        maxRange(arr,1);
        in.close();
    }
    static void maxRange(int[] arr , int current) {
        if(current == arr.length)
            return;                          // base case

        if(arr[current] > maxValue)
            maxValue = arr[current];

        System.out.print(maxValue + " ");
        maxRange(arr,current+1);      // recursive case
    }
}