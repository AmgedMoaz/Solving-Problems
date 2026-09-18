// Array Average

import java.util.Scanner;

public class S {
    public static void main(String[] argv) {
        Scanner in = new Scanner(System.in);

        int n = in.nextInt();
        int [] arr = new int[n];
        for(int i = 0 ; i < n ; i++)
            arr[i] = in.nextInt();

        System.out.printf("%.6f%n",average(arr,0,0));
        in.close();
    }

    static double average(int []arr , int index , long sum) {
        if(index == arr.length)
            return (double) sum/arr.length;            // base case

        sum += arr[index];
        return average(arr,index+1,sum);    // recursive case
    }
}